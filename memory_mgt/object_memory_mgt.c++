#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
    radius = 1;
    cout << "생성자 실행 radius = " << radius << '\n';
}

Circle::Circle(int r) {
    radius = r;
    cout << "생성자 실행 radius = " << radius << '\n';
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << '\n';
}

int main() {
    Circle *p, *q;
    p = new Circle;    //기본 생성자 호출
    q = new Circle(30);    //매개변수가 있는 생성자 호출

    cout << p->getArea() << '\n' << q->getArea() << '\n';
    
    delete p;
    delete q;
}