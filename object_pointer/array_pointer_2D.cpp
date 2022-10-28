#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r; }
    void setRadius(int r) { radius = r; }
    double getArea();
};

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle circles[2][3];    //2차원 객체 array

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            circles[i][j].setRadius((i + j + 1));
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Circle [" << i << "," << j << "]의 면적은";
            cout << circles[i][j].getArea() << '\n';
        }
    }
}