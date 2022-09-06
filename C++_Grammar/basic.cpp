//C++ 기본 형태
//두 수를 입력 받아 합과 곱을 출력하는 프로그램
#include <iostream>    //표준 입출력 헤더 파일
using namespace std;

int a, b, result;    //int형 변수 선언

int sum(int n1, int n2) {    //함수 선언
    return n1 + n2;
}

int main() {    //main 함수
    cout << "두 수를 입력하세요: ";    //입력
    cin >> a >> b;
    result = sum(a, b);

    cout << result << '\n';    //출력
    return 0;
}