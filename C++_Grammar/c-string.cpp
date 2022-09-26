//문자열
//c-string
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name1[4] = {'k', 'i', 'm', '\0'};    //마지막에 '\0' or 0이 없으면 문자열로 인식 x
    char name2[10] = "kim";    //나머지 원소는 모두 '\0'으로 초기화
    char name[4];
    char string1[10];
    char string2[10];
    char string3[100];

    cout << "이름을 입력하세요>>";
    cin >> name;    //공백문자까지를 하나의 문자열로 인식

    cout << "나의 이름은 " << name << "입니다." << '\n';

    cout << "비교할 문자열을 입력하세요>>";
    cin >> string1 >> string2;

    if (strcmp(string1, string2) == 0) {   //같으면 0을 다르면 정수 반환
        cout << "같은 문자열입니다." << '\n';
    } else {
        cout << "다른 문자열입니다." << '\n';
    }

    cout << "문장을 입력하세요>>";
    cin.ignore();
    cin.getline(string3, 100, '\n');    //공백 문자를 포함하여 입력받기
    cout << string3;

    return 0;
}