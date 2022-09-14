//배열 포인터
#include <iostream>
using namespace std;

int main() {
    int n[10];
    int i;
    int *p;

    //배열의 값을 3의 배수로 초기화
    for(i = 0; i < 10; i++) {
        *(n + i) = i * 3;
    }

    p = n;    //p = &n[0]과 동일
    for(i = 0; i < 10; i++) {
        cout << *(p + i) << ' ';
    }
    cout << '\n';

    //배열의 모든 값에 2 더하기
    for(i = 0; i < 10; i++) {
        *p += 2;
        p++;
    }

    for(i = 0; i < 10; i++) {
        cout << n[i] << ' ';
    }

    return 0;
}