#include <iostream>
using namespace std;

class Rect {
    int width, height;
public:
    Rect(int width = 1, int height = 1) { this->width = width; this->height = height; }
    void show();
    bool operator== (Rect op2);
};

void Rect::show() {
    cout << "width = " << width << " height = " << height << endl;
}

bool Rect::operator== (Rect op2) {
    if(this->width == op2.width && this->height == op2.height) return true;
    else return false;
}

int main() {
    Rect r1(3, 5), r2(4, 6);
    r1.show();
    r2.show();
    if(r1 == r2) cout << "equal" << endl;
    else cout << "not equal" << endl;
}