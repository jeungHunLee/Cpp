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
    friend Rect operator+ (int op1, Rect op2);
};

void Rect::show() {
    cout << "width = " << width << " height = " << height << endl;
}

Rect operator+ (int op1, Rect op2) {
    Rect tmp;
    tmp.width = op2.width + op1;
    tmp.height = op2.height + op1;
    return tmp;
}

int main() {
    Rect r1(3, 5), r2;
    r2 = 2 + r1;
    r2.show();
    r1.show();
}