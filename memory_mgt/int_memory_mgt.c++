#include <iostream>
using namespace std;

int main() {
    int *p = new int;    //int 타입 메모리 할당
    
    if(!p) {    //heap 메모리 부족으로 NULL을 할당 받으면 종료
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    *p = 5;    //할당받은 메모리에 5대입
    int n = *p;
    cout << "*p = " << *p << '\n';
    cout << "n = " << n << '\n';

    delete p;    //할당 받은 메모리 반환
}