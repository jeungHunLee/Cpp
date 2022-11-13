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
    cout << "소멸자 생성 radius = " << radius << endl;
}

int main() {
    int n, radius;
    cout << "원의 개수 입력>>";
    cin >> n;

    Circle *p = new Circle[n];    //크기가 5인 객체 배열 메모리 동적 할당

    for(int i = 0; i < n; i++) {
        cout << i << "번째 원의 반지름 길이 입력>>";
        cin >> radius;
        p[i].setRadius(radius);
    }

    for(int i = 0; i < n; i++) {
        cout << (p + i)->getArea() << ' ';
    }
    cout << '\n';

    delete [] p;    //배열의 동적 매모리 해제
}