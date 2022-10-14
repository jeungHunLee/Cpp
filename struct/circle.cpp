#include <iostream>
using namespace std;

struct Circle {
private:
    int radius;
public:
    Circle(int r);
    double getArea();
};

Circle::Circle(int r) {
    radius = r;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle circle(5);
    cout << "원의 면적은 " << circle.getArea() << '\n';
}