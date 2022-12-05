#include <iostream>
using namespace std;

class Base {
    int a;
protected:
    void setA(int a) { this->a = a; }
public:
    void showA() { cout << a << endl; }
};

class Derived : protected Base {    //Base 클래스 protected로 상속
    int b;
protected:
    void setB(int b) { this->b = b; }
public:
    void showB() { cout << b << endl; }
};

int main() {
    Derived x;
    //x.setA(10);    //protected 접근 불가
    //x.showA();    //protected로 변경
    //x.setB(20);    //protected 접근 불가
    x.showB();
}