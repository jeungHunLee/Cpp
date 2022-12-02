#include <iostream>
using namespace std;

class Circle {
    static int numOfCircles;
    int radius;
public:
    Circle(int r = 1);
    ~Circle() { numOfCircles--; }
    double getArea() { return 3.14 * radius * radius; }
    static int getNumOfCircles() { return numOfCircles; }
};

Circle::Circle(int r) {
    radius = r;
    numOfCircles++;
}

int Circle::numOfCircles = 0;    //0으로 초기화

int main() {
    Circle *p = new Circle[10];
    cout << "원의 개수 " << Circle::getNumOfCircles() << endl;

    delete [] p;    //10개의 원 소멸
    cout << "원의 개수 " << Circle::getNumOfCircles() << endl;

    Circle a;
    cout << "원의 개수 " << Circle::getNumOfCircles() << endl;

    Circle b;
    cout << "원의 개수 " << Circle::getNumOfCircles() << endl;
}