#include <iostream>
using namespace std;    //cout과 cin에 관련된 표준 라이브러리는 std에 구현

//사각형의 높이와 너비를 입력 받아 넓이 출력하기
int main() {
    int width, height, area;

    cout << "너비를 입력하세요>>";
    cin >> width;

    cout << "높이를 입력하세요>>";
    cin >> height;

    area = width * height;
    cout << "사각형의 넓이는 " << area << '\n';
}