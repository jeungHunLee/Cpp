#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    Circle(int radius);
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() { radius = 1; }
Circle::Circle(int radius) {
    this->radius = radius;
}

int main() {
    int n = 5;
    int &refn = n;    //변수 n에 대한 참조 변수, refn은 n에 대한 별칭
    cout << "n = " << n << endl;
    cout << "refn = " << refn << endl;

    refn++;    //refn == 6, n == 6
    cout << "n = " << n << endl;
    cout << "refn = " << refn << endl;

    int *p = &refn;    //참조 변수의 메모리를 가리키는 포인터
    cout << "*p = " << *p << endl;


    Circle circle;
    Circle &refc = circle;    //circle 객체에 대한 별칭

    cout << "circle 넓이 = " << circle.getArea() << endl;
    cout << "refc 넓이 = " << refc.getArea() << endl;
}