//switch 조건문
#include <iostream>
using namespace std;

char medal = 'G';

int main() {
    switch (medal) {
        case 'G':
        cout << "금메달입니다.";
        break;
        case 'S':
        cout << "은메달입니다.";
        break;
        case 'B':
        cout << "동메달입니다.";
        break;
        default:
        cout << "메달을 획득하지 못했습니다.";
    }
}