#include <iostream>
using namespace std;

class Rect;
bool equals(Rect r, Rect s);

class Rect {
    int width, height;    //private
public:
    Rect(int width, int height) { this->width = width; this->height = height; }
    friend bool equals(Rect r, Rect s);    //friend 함수 선언
};

bool equals(Rect r, Rect s) {
    if(r.width == s.width && r.height == s.height) return true;    //외부 함수에서 Rect 클래스의 모든 요소 접근 가능
    else return false;
}

int main() {
    Rect a(3, 4), b(4, 5);
    if(equals(a, b)) cout << "equal" << endl;
    else cout << "not equal" << endl;
}