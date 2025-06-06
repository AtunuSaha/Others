#include <iostream>
using namespace std;

bool isNumericConstant(const string& input) {
    for (char ch : input) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    if (isNumericConstant(input)) {
        cout << "Numeric constant" << endl;
    } else {
        cout << "Not numeric" << endl;
    }
    return 0;
}

