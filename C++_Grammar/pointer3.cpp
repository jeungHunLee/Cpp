//매개변수로 포인터를 전달하는 함수
#include <iostream>
using namespace std;

void makeDouble(int *p, int size);
void printArray(int a[], int size);

int main() {
    int a[5] = {1, 3, 5, 7, 9};

    makeDouble(a, 5);    //&a[0]를 매개변수로 전달
    printArray(a, 5);    //배열 a를 매개변수로 전달
}

void makeDouble(int *p, int size) {
    for(int i = 0; i < size; i++) {
        *(p + i) *= 2;
    }
}

void printArray(int a[], int size) {
    for(int i = 0; i < size; i++) {
        cout << a[i] << ' ';
    }
}