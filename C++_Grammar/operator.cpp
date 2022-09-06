//연산자
#include <iostream>
using namespace std;

int a = 2, b = 10, c;    //int형 변수 선언
bool result;   //boolean 변수 선언

int main() {
    cout << a + b / 4 * 2 << '\n';    //나누기 연산자(/)는 몫을 반환
    result = a != b;
    cout << boolalpha << result << '\n';    //true
    cout << b % a << '\n';   //0
    cout << sizeof(a) << '\n';    //4
    cout << a++ << '\n';    //2    출력 이후에 a에 1이 증가
    a += b;
    cout << a << '\n';    //13
    c = (a + b, a - b);    //왼쪽 연산 계산 후 오른쪽 연산 수행 후 결과 리턴
    cout << (a + b, a - b);   //3

    return 0;
}