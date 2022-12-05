#include <iostream>
#include <string>
using namespace std;

class Point {
protected:
    int x, y;
public:
    void set(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

class ColorPoint : public Point {    //Point 클래스를 상속 받은 ColorPoint 파생 클래스
    string color;
public:
    void setColor(string color) { this->color = color; }
    void showColorPoint();
    bool equals(ColorPoint p);
};

void ColorPoint::showColorPoint() {
    cout << color << ":";
    cout << "(" << this->x << "," << this->y << ")" << endl;    //기본 클래스의 protected 변수를 파생 클래스에서 직접 접근 가능
}

int main() {
    ColorPoint cp;
    cp.set(3, 4);    //기본 클래스의 멤버 함수 접근
    cp.setColor("Red");
    cp.showColorPoint();
}