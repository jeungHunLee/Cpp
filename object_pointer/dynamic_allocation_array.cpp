#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "배열의 크기 입력>>";
    cin >> n;
    if(n == 0) return 0;
    int *p = new int[n];    //크기가 n 배열의 메모리 동적 할당
    if(!p) {    //메모리가 할당되지 않았다면 종료
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    for(int i = 0; i < n; i++) {
        cout << i + 1 << "번째 정수: ";
        cin >> p[i];
    }

    for(int i = 0; i < n; i++) {
        cout << p[i] << ' ';
    }

    delete [] p;    //할당 받은 메모리 반환
}