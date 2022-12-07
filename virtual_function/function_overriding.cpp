#include <iostream>
using namespace std;

class Base {
public:
    virtual void f() {
        cout << "Base::f() called" << endl;
    }
};

class Derived : public Base {
public:
    virtual void f() {    //function overriding(반환 타입, 매개변수 타입 개수, 함수 이름 모두 동일)
        cout << "Derived::f() called" << endl;
    }
};

int main() {
    Derived d, *pDer;
    pDer = &d;
    pDer->f();    //Derived::f() 호출

    Base *pBase;
    pBase = pDer;
    pBase->f();    //동적바인딩 Derived::f() 호출
}