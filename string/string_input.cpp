#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence[5];
    string maxLength;

    for(int i = 0; i < 5; i++) {
        cout << "문자열";
        getline(cin, sentence[i], '\n');    //enter를 만날때까지 버퍼에 저장
        if(maxLength.size() < sentence[i].size()) maxLength = sentence[i];
    }

    cout << "가장 긴 문자열은 " << maxLength << '\n';
}