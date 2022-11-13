#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;    //빈 문자열
    string address("서울특별시 종로구 세종대로 종로1가");
    string copyAddress(address);    //address 문자열을 복사

    string *p = new string("hello");    //string 객체 동적 생성
    p->append(" world!");    //문자열 객체에 추가

    cout << str << '\n';
    cout << address << '\n';
    cout << copyAddress << '\n';
    cout << *p << '\n';

    delete p;    //동적 메모리 해제
}