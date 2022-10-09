#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, string1, string2, introducing;

    cout << "이름을 입력하세요>>";
    cin >> name;
    cout << "제 이름은 " << name << "입니다." << '\n';

    cout << "비교할 두 문자열을 입력하세요>>";
    cin >> string1 >> string2;
    if (string1 == string2) {    //문자열 비교
        cout << "같은 문자열입니다." << '\n';
    } else {
        cout << "다른 문자열입니다." << '\n';
    }

    cout << "자기소개>>";
    cin.ignore();
    getline(cin, introducing);
    cout << introducing;
}