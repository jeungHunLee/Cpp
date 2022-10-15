#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    double getArea();
};

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle circle(5);

    Circle *p;    //Circle 클래스형 객체 포인터
    p = &circle;
    cout << p->getArea() << '\n';    //객체 포인터가 가리키는 객체의 getArea() 호출
    cout << (*p).getArea() << '\n';    //위와 같은 표현
}