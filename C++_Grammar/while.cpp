//while 반복문
#include <iostream>
using namespace std;

int main() {
    int a, b, result = 0;
    cout << "두 수를 입력하세요: " << '\n';
    cin >> a >> b;

    int i = a;
    while (i <= b) {
        result += i;
        i++;
    }

    cout << result;

    return 0;
}