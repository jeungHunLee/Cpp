//for 반복문
//두 수 a, b를 입력받아 a부터 b까지 합 구하기
#include <iostream>
using namespace std;

int main() {
    int a, b, result = 0;
    cout << "두 수를 입력하세요: " << '\n';
    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        result += i;
    }

    cout << result;

    return 0;
}