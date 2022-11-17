#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    Circle(int radius);
    ~Circle();
    double getArea() { return 3.14 * radius * radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int radius) {
    this->radius = radius;
    cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle &c) {    //참조 매개변수, 생성자/소멸자 실행 x
    int r = c.getRadius();
    c.setRadius(r + 1);
}

void swap(int &a, int &b) {    //매개변수를 참조 변수로 전달받음(별칭)
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int m = 2, n = 9;
    swap(m, n);
    cout << "m = " << m << " n = " << n << endl;

    Circle circle(10);
    cout << circle.getRadius() << "인 원의 넓이 = " << circle.getArea() << endl;

    increase(circle);
    cout << circle.getRadius() << "인 원의 넓이 = " << circle.getArea() << endl;
}