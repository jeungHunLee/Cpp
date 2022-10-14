#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();         //parameter가 없는 생성자
    Circle(int r);    //parameter가 있는 생성자
    double getArea();
};

Circle::Circle() {
    radius = 1;    //parameter가 없는 경우 default 값으로 반지름 1로 초기화
}

Circle::Circle(int r) {
    radius = r;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    cout << fixed;    //parameter가 없는 생성자 호출
    cout.precision(2);

    Circle circle1;
    cout << "circle1의 면적은 " << circle1.getArea() << '\n';

    Circle circle2(10);    //parameter가 있는 생성자 호출
    cout << "circle2의 면적은 " << circle2.getArea() << '\n';
}