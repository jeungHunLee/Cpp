#include <iostream>
using namespace std;

int main() {
    int *p = new int;
    
    if(!p) {
        //메모리를 정상적으로 할당받지 못한 경우 NULL 반환
        cout << "메모리를 할당할 수 없습니다.";
        return 0; 
    }

    *p = 5;
    cout << "*p = " << *p << endl;

    delete p;    //할당 받은 메모리 반환
}