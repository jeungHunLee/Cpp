#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "입력할 정수의 개수>>";
    cin >> n;

    if(n <= 0) return 0;
    
    int *p = new int[n];    //크기가 n인 int 타입 array 메모리 동적 할당
    
    if(!p) {
        cout << "메모리를 할당할 수 없습니다.";
        return 0;
    }

    for(int i = 0; i < n; i++) {
        cout << i + 1 << "번째 정수>>";
        cin >> p[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += p[i];
    }

    cout << "평균 = " << double(sum) / double(n) << '\n';

    delete [] p;    //동적 메모리 반환
}