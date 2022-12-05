#include <iostream>
using namespace std;

class Adder {
protected:
    int add(int a, int b) { return a + b; }
};

class Subtractor {
protected:
    int minus(int a, int b) { return a - b; }
};

class Calculator : public Adder, public Subtractor {
public:
    int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
    int result;
    switch(op) {
        case '+':
        result = add(a, b);
        break;
        case '-':
        result = minus(a, b);
        break;
    }
    return result;
}

int main() {
    Calculator calculator;
    cout << "2 + 4 = " << calculator.calc('+', 2, 4) << endl;
    cout << "100 - 8 = " << calculator.calc('-', 100, 8) << endl; 
}