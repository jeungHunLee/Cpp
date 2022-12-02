#include <iostream>
using namespace std;

class Math {
public:
    static int abs(int a) { return a > 0 ? a : -a; }    //static 멤버 함수
    static int max(int a, int b) { return (a > b) ? a : b; }    //static 멤버 함수
    static int min(int a, int b) { return (a < b) ? a : b; }    //static 멤버 함수
};

int main() {
    cout << Math::abs(-5) << endl;
    cout << Math::max(1, 5) << endl;
    cout << Math::min(-1, 5) << endl;
}