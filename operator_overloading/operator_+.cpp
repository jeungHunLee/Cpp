#include <iostream>
using namespace std;

class Rect {
    int width, height;
public:
    Rect(int width = 1, int height = 1) { this->width = width; this->height = height; }
    void show();
    Rect operator + (Rect op2);
};

void Rect::show() {
    cout << "width = " << width << " height = " << height << endl;
}

Rect Rect::operator+(Rect op2) {
    Rect tmp; 
    tmp.width = this->width + op2.width;    //같은 클래스의 멤버 함수로 접근하므로 private 멤버 변수 접근 가능
    tmp.height = this->height + op2.height;
    return tmp;
}

int main() {
    Rect r1(3, 5), r2(4, 6), r3;
    r3 = r1 + r2;
    r3.show();
}