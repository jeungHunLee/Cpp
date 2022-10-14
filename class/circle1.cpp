#include <iostream>
using namespace std;

class Circle {
public:
    int radius;    //멤버 변수 선언
    double getArea();    //멤버 함수 선언
};

double Circle::getArea() {   //멤버 함수 구현
    return 3.14 * radius * radius;
}

int main() {
    cout << fixed;    //소숫점 아래 표시 설정
    cout.precision(2);    //소숫점 아래 2자리까지 표시

    Circle circle1;
    circle1.radius = 2;
    cout << "circle1의 면적은 " << circle1.getArea() << '\n';

    Circle circle2;
    circle2.radius = 10;
    cout << "circle2의 면적은 " << circle2.getArea() << '\n';
}