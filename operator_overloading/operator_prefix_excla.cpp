#include <iostream>
using namespace std;

class Rect {
    int width, height;
public:
    Rect(int width = 1, int height = 1) {
        this->width = width;
        this->height = height;
    }
    void show();
    bool operator! ();    //전위 ! 연산자 선언
};

void Rect::show() {
    cout << "width = " << width << " height = " << height << endl;
}

bool Rect::operator! () {
    if(this->width == 0 || this->height == 0) return true;
    else return false;
}

int main() {
    Rect r1(3, 5), r2(0, 2);
    if(!r1) cout << "not Rect" << endl;
    else cout << "is Rect" << endl;

    if(!r2) cout << "not Rect" << endl;
    else cout << "is Rect" << endl;
}