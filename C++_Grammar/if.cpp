//if 조건문
#include <iostream>
using namespace std;

int mathScore = 85;

int main() {
    if (mathScore >= 90) {
        cout << "A학점입니다.";
    } else if (mathScore >= 80) {
        cout << "B학점입니다.";
    } else if (mathScore >= 70) {
        cout << "C학점입니다";
    } else if (mathScore >= 60) {
        cout << "D학점입니다.";
    } else {
        cout << "F학점입니다.";
    }

    return 0;
}