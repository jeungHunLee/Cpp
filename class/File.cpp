#include <iostream>
#include <string>
using namespace std;

class File {
    string fileName;
public:
    File();
    File(string name);
    ~File();    //deinit
};

File::File(): File("no name") {}
File::File(string name) {
    fileName = name;
    cout << '"' << fileName << '"' << "파일을 열었습니다." << '\n';
}
File::~File() {    //deinit 구현~
    cout << '"' << fileName << '"' << "파일을 닫습니다." << '\n';
}

int main() {
    File file1;
    File file2("해오라기");
}