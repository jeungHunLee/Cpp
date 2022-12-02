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
    Rect operator++ (int x);    //후위 ++ 연산자 선언
                                //전위 연산자와 구분 하기 위한 매개변수
};

void Rect::show() {
    cout << "width = " << width << " height = " << height << endl;
}

Rect Rect::operator++ (int x) {
    Rect tmp = *this;    //반환되는 객체는 기존 그대로 값 반환
    width = width + 1;
    height = height + 1;
    return tmp;
}

int main() {
    Rect r1(3, 5), r2;
    r2 = r1++;
    r2.show();
    r1.show();
}