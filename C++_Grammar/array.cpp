//배열
#include <iostream>
using namespace std;

int main() {
    int arr[10];    //크기가 10인 int형 배열 선언
    for (int i = 0; i <= 9; i++) {    //배열에 1부터 10까지 저장
        arr[i] = i + 1;
    }

    for (int i = 0; i <= 9; i++) {    //배열의 index 0부터 9까지 출력
        cout << arr[i] << ' ';
    }

    return 0;
}