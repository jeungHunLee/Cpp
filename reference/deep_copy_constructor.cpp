#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char* name;
    int id;
public:
    Person(int id, const char* name);    //일반 생성자
    Person(const Person &name);    //복사 생성자
    ~Person();    //소멸자
    void changeName(const char* name);
    void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {    //일반 생성자 구현
    this->id = id;
    int len = strlen(name);
    this->name = new char [len + 1];
    strcpy(this->name, name);
}

Person::Person(const Person &person) {    //복사 생성자 구현
    this->id = person.id;
    int len = strlen(person.name);
    this->name = new char [len + 1];    //this->name을 위한 공간 할당
    strcpy(this->name, person.name);    //문자열 복사
}

Person::~Person() {
    if(name) {    //name에 할당 받은 동적 메모리가 존재할 경우 메모리 반환
        delete [] name;
    }
}

void Person::changeName(const char* name) {
    if(strlen(this->name) < strlen(name)) return;
    strcpy(this->name, name);    //name의 문자열을 this->name에 복사
}

int main() {
    Person person1(1, "Kane");
    Person person2(person1);

    person1.show();
    person2.show();

    person2.changeName("Mike");

    person1.show();
    person2.show();
}