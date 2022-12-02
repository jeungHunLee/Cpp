#include <iostream>
using namespace std;

class Person {
public:
    int money;    //인스턴스 멤버
    void addMoney(int money) {
        this->money += money;
    }

    static int sharedMoney;    //static 멤버 변수
    static void addShared(int n) {    //static 멤버 함수
        sharedMoney += n;
    }
};

//static 변수에 대한 메모리 공간 생성
int Person::sharedMoney = 10;

int main() {
    Person::addShared(50);    //객체 생성전 static 멤버에 접근
    cout << Person::sharedMoney << endl;
    Person han;
    han.money = 100;
    han.addShared(100);    //static 멤버 함수에 접근
    cout << han.money << ' ' << han.sharedMoney << endl;

    Person lee;
    lee.money = 150;
    lee.addMoney(200);
    lee.addShared(200);    //static 멤버 함수에 접근
    cout << lee.money << ' ' << lee.sharedMoney << endl;
}