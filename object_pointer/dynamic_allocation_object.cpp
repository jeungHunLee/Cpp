#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    Circle(int radius);
    ~Circle();
    void setRadius(int radius) { this->radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() { this->radius = 1; }

Circle::Circle(int radius) { this->radius = radius; }

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
    Circle *p, *q;
    //Circle 타입 메모리 할당
    p = new Circle();    //"new Circle"도 가능
    q = new Circle(30);    //매개변수가 있는 생성자 호출
    cout << p->getArea() << '\n' << q->getArea() << '\n';

    delete p;
    delete q;
}