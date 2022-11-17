#include <iostream>
using namespace std;

int& arr(int a[], int n) {
    return a[n];    //참조 반환
}

int main() {
    int x[] = {1, 2, 3, 4, 5};
    arr(x, 0) = 99;    //x[0] = 99와 동일
    cout << x[0] << endl;

    int &refn = arr(x, 4);    //refn는 x[4]에 대한 참조
    refn = 0;
    cout << x[4] << endl;
}