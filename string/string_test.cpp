#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;    //빈 문자열
    string address("서울특별시 종로구 세종대로 종로1가");
    string copyAddress(address);    //address 문자열을 복사

    cout << str << '\n';
    cout << address << '\n';
    cout << copyAddress << '\n';
}