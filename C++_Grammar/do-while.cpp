#include <iostream>
using namespace std;

int main() {
    int a, b, i, result = 0;

    cout << "두 개의 정수 입력>>";
    cin >> a >> b;

    i = a;
    do {
        result += i;
        i++;
    } while(i <= b);

    cout << result;
}