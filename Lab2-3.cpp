#include <iostream>
#include <string>
using namespace std;


void checkComment(string str) {

    if (str[0] == '/' && str[1] == '/') {
        cout << "It is a single-line comment" << endl;
    }

    else if (str[0] == '/' && str[1] == '*' &&
             str[str.length()-2] == '*' && str[str.length()-1] == '/') {
        cout << "It is a multi-line comment" << endl;
    }
    else {
        cout << "It is not a comment" << endl;
    }
}

int main() {
         string str;

        cout << "Enter a line: ";
        getline(cin, str);
        checkComment(str);



    return 0;
}
