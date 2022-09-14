//매개변수로 배열을 전달 받는 함수
#include <iostream>
using namespace std;

int sum(int a[], int size);
void makeDouble(int a[], int size);
void printArray(int a[], int size);

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[] = {1, 3, 5, 7, 9};
    int result;

    result = sum(a, 5);
    cout << "배열 a의 모든 원소의 합은 " << result << "입니다." << '\n';

    makeDouble(b, 5);
    printArray(b, 5);

    return 0;
}

int sum(int a[], int size) {
    int result = 0;

    for(int i = 0; i < size; i++) {
        result += a[i];
    }

    return result;
}

void makeDouble(int a[], int size) {
    for(int i = 0; i < size; i++) {
        a[i] *= 2;
    }
}

void printArray(int a[], int size) {
    for(int i = 0; i < size; i++) {
        cout << a[i] << ' ';
    }
}