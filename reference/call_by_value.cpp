//call by value에 의한 객체 복사
#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    Circle(int radius);
    ~Circle();
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() : Circle(1) {}
Circle::Circle(int radius) {
    this->radius = radius;
    cout << "생성자 실행 radius = " << this->radius << endl;
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle c) {    //객체가 매개변수의 인수로 전달 되었을때, 소멸자만 실행(생성자 실행 x)
    int r = c.getRadius();
    c.setRadius(r + 1);
}

int main() {
    Circle c1(30);    //반지름 30인 원 생성
    increase(c1);    //call by value 방식으로 함수에 객체 전달
    cout << c1.getRadius() << endl;    //call by value로 기존 객체의 값에는 변화 x
}