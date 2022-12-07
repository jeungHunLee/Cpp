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
    void f() {    //virtual 지시어는 상속되므로 생략 가능
        cout << "Derived::f() called" << endl;
    }
};

class GrandDerived : public Derived {
public:
    void f() {
        cout << "GrandDerived::f() called" << endl;
    }
};

int main() {
    GrandDerived g;
    Base b;
    Base *bp;
    Derived *dp;
    GrandDerived *gp;

    dp = gp = &g;    //업캐스팅
    bp = &b;

    bp->f();
    dp->f();
    gp->f();
}