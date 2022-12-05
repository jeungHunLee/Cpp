#include <iostream>
#include <string>
using namespace std;

class Point {
    int x, y;
public:
    void set(int x, int y) { this->x = x; this->y = y; }
    void showPoint() {
        cout << "(" << x << ',' << y << ")" << endl;
    }
};

class ColorPoint: public Point {    //Point 클래스를 public으로 상속 받은 ColorPoint 파생 클래스
    string color;
    //기본 클래스의 x와 y도 상속되지만 private 접근 지정자 이므로 상속 받은 public 멤버 함수를 통해 접근 가능
public:
    void setColor(string color) { this->color = color; }
    void showColorPoint();
};

void ColorPoint::showColorPoint() {
    cout << color << ':';
    showPoint();    //기본 클래스의 멤버 함수 접근
}

int main() {
    Point p;    //기본 클래스 객체 생성
    ColorPoint cp;    //파생 클래스 객체 생성
    cp.set(3, 4);    //기본 클래스의 멤버 함수 접근
    cp.setColor("Red");
    cp.showColorPoint();    //기본 클래스의 멤버 함수 접근
}