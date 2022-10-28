#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle();
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
    radius = 1;
    cout << "생성자 실행 radius = " << radius << "\n";
}

Circle::~Circle() {
    cout << "소멸자 실행 radius = " << radius << '\n';
}

int main() {
    int n;
    cout << "생성하고자 하는 원의개수>>";
    cin >> n;
    if(n <= 0) return 0;

    Circle *pArray = new Circle [n];    //크기가 n인 Circle 객체 배열 동적 생성

    for(int i = 0; i < n; i++) {
        int radius;
        cout << i + 1 << "번 원: ";
        cin >> radius;
        pArray[i].setRadius(radius);
    }

    for(int i = 0; i < 3; i++) {
        cout << (pArray + i)->getArea() << '\n';
    }

    delete [] pArray;
}