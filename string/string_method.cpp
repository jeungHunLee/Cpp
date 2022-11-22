#include <iostream>
#include <string>
using namespace std;

int main() {
    //문자열 비교
    string name1 = "kane";
    string name2 = "kate";
    int res = name1.compare(name2);    //같으면 0, name1이 빠르면 -1, name2가 빠르면 1
    if(res == 0) cout << "두 문자열을 일치합니다." << endl;
    else if(res < 0) cout << name1 << '<' << name2 << endl;
    else cout << name1 << '>' << name2 << endl;

    //문자열 비교(비교 연산자 이용)
    if(name1 == name2) cout << "두 문자열을 일치합니다." << endl;
    else if(name1 < name2) cout << name1 << '<' << name2 << endl;
    else cout << name1 << '>' << name2 << endl;

    //문자열 연결(append)
    string a = "I";
    a.append(" love you");
    cout << a << endl;

    //문자열 연결(+, +=)
    a = "I";
    string c = a + " love you";    //문자열 연결
    cout << c << endl;

    //문자열 삽입
    string b = "I love you";
    b.insert(2, "really ");    //index 2에 "really " 삽입
    cout << b << endl;

    b.replace(14, 16, "C++");    //index 14~16을 "C++"로 교체
    cout << b << endl;

    //문자열 길이
    string d = "C++ programming";
    cout << d.length() << endl;    //문자열 c의 크기 출력
    cout << d.size() << endl;    //문자열 c의 크기 출력
    cout << d.capacity() << endl;    //메모리 용량 출력

    //문자열 삭제
    d.erase(0, 4);    //0번 index부터 4개 삭제
    cout << d << endl;

    //서브스트링
    string e = "programming study";
    string f = e.substr(0, 11);    //0번 index부터 11개 문자 리턴
    string g = e.substr(12);    //indrx 12부터 끝까지 반환
    cout << f << endl;
    cout << g << endl;

    //문자열 검색
    string h = "I love you";
    cout << h.find("love") << endl;    //"love"의 'l'이 처음 시작되는 index 반환
    cout << h.find("C++") << endl;    //존재하지 않는 문자열은 -1반환

    //문자열을 숫자로 변환하기, stoi()
    string year = "2022";
    int n = stoi(year);
    cout << n << endl;
}