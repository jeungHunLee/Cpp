#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();         
    Circle(int r);    
    double getArea();
};

Circle::Circle() : Circle(1) {}    //delegate 생성자

Circle::Circle(int r) {    //target 생성자
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