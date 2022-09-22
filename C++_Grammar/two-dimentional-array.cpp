#include <iostream>
using namespace std;

int main() {
    int arr[2][5];
    int num = 1;
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 5; j++) {
            arr[i][j] = num;
            num++;
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 5; j++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}