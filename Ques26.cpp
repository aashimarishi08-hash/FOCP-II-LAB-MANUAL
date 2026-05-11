#include <iostream>
#include <string>
using namespace std;

int main() {

    string password;
    bool upper = false, lower = false, digit = false, special = false;

    cout << "Enter Password: ";
    cin >> password;

    for(int i = 0; i < password.length(); i++) {

        if(password[i] >= 'A' && password[i] <= 'Z')
            upper = true;

        else if(password[i] >= 'a' && password[i] <= 'z')
            lower = true;

        else if(password[i] >= '0' && password[i] <= '9')
            digit = true;

        else if(password[i] == '@' || password[i] == '#' ||
                password[i] == '$' || password[i] == '%' ||
                password[i] == '&' || password[i] == '*')
            special = true;
    }

    if(upper && lower && digit && special)
        cout << "Strong Password";
    else
        cout << "Weak Password";

    return 0;
}
