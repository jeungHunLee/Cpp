#include <iostream>
using namespace std;

class Rect {
    int width, height;
public:
    Rect(int width = 1, int height = 1) { this->width = width; this->height = height; }
    void show();
    Rect& operator+= (Rect op2);
};

void Rect::show() {
    cout << "width = " << width << " height = " << height << endl;
}

Rect& Rect::operator+= (Rect op2) {
    this->width = this->width + op2.width;
    this->height = this->height + op2.height;
    return *this;    //객체 자기 자신의 참조 반환
}

int main() {
    Rect r1(3, 5), r2(4, 6), r3;
    r1.show();
    r2.show();
    r3 = r1 += r2;
    r3.show();
    r1.show();
}