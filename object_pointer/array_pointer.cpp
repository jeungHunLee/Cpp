#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r) { radius = r;}
    void setRadius(int r) { radius = r; }
    double getArea();
};

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Circle circleArray[3];    //매개변수가 없는 생성자(기본생성자) 호출
    
    //배열 각 객체 요소에 접근
    circleArray[0].setRadius(2);
    circleArray[1].setRadius(10);
    circleArray[2].setRadius(15);

    Circle *p = circleArray;    //배열의 0번째 주소 대입

    for(int i = 0; i < 3; i++) {
        cout << i << "번 면적: " << p->getArea() << '\n';
        p++;
    }
}