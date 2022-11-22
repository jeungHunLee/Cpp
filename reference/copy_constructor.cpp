#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(const Circle& c);     //copy constructor(얕은 복사)
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle(const Circle& c) {    //copy constructor 구현
    this->radius = c.radius;
    cout << "복사 생성자 실행 radius = " << radius << endl;
}

int main() {
    Circle circle1(30);
    Circle circle2(circle1);

    cout << "원본의 면적 = " << circle1.getArea() << endl;
    cout << "사본의 면적 = " << circle2.getArea() << endl;
}