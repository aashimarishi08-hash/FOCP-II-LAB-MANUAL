#include <iostream>
#include <string>
using namespace std;

int main() {

    string str, rev = "";

    cout << "Enter a string: ";
    cin >> str;

    for(int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }

    cout << "Reversed String = " << rev;

    return 0;
}
