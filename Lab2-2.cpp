#include <iostream>
using namespace std;

bool isOperator(char ch) {

    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=';
}

int main() {
    char input;
    cout << "Enter a character: ";
    cin >> input;

    if (isOperator(input)) {
        cout << "It's a Operator" << endl;
    } else {
        cout << "This is not an operator" << endl;
    }
    return 0;
}

