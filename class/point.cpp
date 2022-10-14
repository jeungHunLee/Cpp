#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point();
    Point(int a, int b);
    void show();
};

Point::Point(): Point(0, 0) {}

Point::Point(int a, int b) {
    x = a;
    y =  b;
}

/*
Point::Point(): x(0), y(0) {}    //생성자 서두에서 초기화
Point::Point(int a, intb): x(a), y(b) {}    //생성자 서두에서 초기화
*/

void Point::show() {
    cout << "(" << x << "," << y << ")" << '\n';
}

int main() {
    Point p1;
    p1.show();   //(0, 0)

    Point p2(10, 20);
    p2.show();    //(10, 20)

}