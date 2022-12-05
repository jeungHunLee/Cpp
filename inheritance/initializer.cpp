#include <iostream>
#include <string>
using namespace std;

class TV {
    int size;
public:
    TV() { size = 20; }
    TV(int size) { this->size = size; }
    int getSize() { return size; }
};

class WideTV : public TV {
    bool videoIn;
public:
    WideTV(int size, bool videoIn) : TV(size) {    //상위 클래스 생성자 명시적 호출
        this->videoIn = videoIn;
    }
    bool getVideoIn() { return videoIn; } 
};

class SmartTV : public WideTV {
    string ipAddr;
public:
    SmartTV(string ipAddr, int size) : WideTV(size, true) {    //상위 클래스 생성자 명시적 호출
        this->ipAddr = ipAddr;
    }
    string getIpAddr() { return ipAddr; }
};

int main() {
    SmartTV htv("192.0.0.1", 32);
    cout << htv.getSize() << endl;
    cout << boolalpha << htv.getVideoIn() << endl;
    cout << htv.getIpAddr() << endl;
}