//포인터 변수
#include <iostream>
using namespace std;

int main() {
    int n = 10, m;
    char a = 'A';
    double d;

    int *p = &n;    //int형 포인터 변수 p에 n의 주소를 저장
    char *q = &a;    // char형 포인터 변수 q에 a의 주소를 저장
    double *r = &d;    //double형 포인터 변수 r에 d의 주소를 저장

    *p = 25;    //n에 25 저장
    *q = 'B';    //a에 문자 'B' 저장
    *r = 3.14;    //d에 3.14 저장
    m = *p + 10;    //p가 가리키는 값에 10을 더한 값을 m에 저장

    cout << n << ' ' << *p << '\n';
    cout << a << ' ' << *q << '\n';
    cout << d << ' ' << *r << '\n';
    cout << m << ' ' << '\n';

    return 0;
}