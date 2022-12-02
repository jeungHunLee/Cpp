#include <iostream>
using namespace std;

class Rect {
    int width, height;
public:
    Rect(int width = 1, int height = 1) {
        this->width = width;
        this->height = height;
    }
    void show();
    Rect& operator++ ();    //전위 ++ 연산자 함수 선언
};

void Rect::show() {
    cout << "width = " << width << " height = " << height << endl;
}

Rect& Rect::operator++ () {
    width  = width + 1;
    height = height + 1;
    return *this;
}

int main() {
    Rect r1(3, 5), r2;
    r2 = ++r1;
    r2.show();
    r1.show();
}