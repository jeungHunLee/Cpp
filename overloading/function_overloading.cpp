#include <iostream>
using namespace std;

int sum(int a, int b) {    //a부터 b까지 더하는 함수
    int s = 0;
    for(int i = a; i <= b; i++) {
        s += i;
    }
    return s;
}

int sum(int a) {    //1부터 a까지 더하는 함수
    int s = 0;
    for(int i = 1; i <= a; i++) {
        s += i;
    }
    return s;
}

int main() {
    cout << sum(3, 5) << endl;
    cout << sum(10) << endl;
}