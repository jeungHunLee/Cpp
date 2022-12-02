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
    friend void operator++ (Rect &op);    //전위 ++ 연산자 선언
    friend Rect operator++ (Rect &op, int x);    //후위 ++ 연산자 선언
};

void Rect::show() {
    cout << "width = " << width << " height = " << height << endl;
}

void operator++ (Rect &op) {    //전위 ++ 연산자
    op.width = op.width + 1;
    op.height = op.height + 1;
}

Rect operator++ (Rect &op, int x) {    //후위 ++ 연산자
    Rect tmp = op;
    op.width = op.width + 1;
    op.height = op.height + 1;
    return tmp;
}

int main() {
    Rect r1(3, 5), r2(5, 6), r3;
    ++r1;
    r1.show();
    r3 = r2++;
    r2.show();
    r3.show();
}