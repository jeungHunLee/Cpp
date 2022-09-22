//함수
#include <iostream>
using namespace std;

int add(int a, int b) {    //parameter로 두 수를 전달 받아 합을 반환하는 함수
    int sum = a + b;
    return sum;
}

void sub(int a, int b);    //함수 프로토타입 선언

int main() {
    int a, b;
    cout << "두 수를 입력하세요: ";
    cin >> a >> b;

    int sum = add(a, b);
    cout << a << "와 " << b << "의 합은 " << sum << "입니다." << '\n';

    sub(a, b);

    return 0;
}

void sub(int a, int b) {    //함수 원형만 선언된 함수 구현
    int result = a - b;

    cout << a << "와 " << b << "의 차는 " << result << "입니다.";
}