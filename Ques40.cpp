#include <iostream>
#include <string>
using namespace std;

int main() {

    string str, result = "";
    int words = 0, digits = 0, special = 0;
    bool valid = true;

    cout << "Enter a string: ";
    getline(cin, str);

    // Remove extra spaces
    bool spaceFound = false;

    for(int i = 0; i < str.length(); i++) {

        if(str[i] != ' ') {
            result += str[i];
            spaceFound = false;
        }

        else if(!spaceFound && result.length() > 0) {
            result += ' ';
            spaceFound = true;
        }
    }

    // Remove trailing space
    if(result[result.length() - 1] == ' ')
        result.erase(result.length() - 1);

    // Convert to sentence case
    if(result[0] >= 'a' && result[0] <= 'z')
        result[0] = result[0] - 32;

    for(int i = 1; i < result.length(); i++) {

        if(result[i] >= 'A' && result[i] <= 'Z')
            result[i] = result[i] + 32;
    }

    // Count words, digits, special characters
    words = 1;

    for(int i = 0; i < result.length(); i++) {

        if(result[i] == ' ')
            words++;

        else if(result[i] >= '0' && result[i] <= '9')
            digits++;

        else if(!((result[i] >= 'A' && result[i] <= 'Z') ||
                  (result[i] >= 'a' && result[i] <= 'z') ||
                   result[i] == ' ' ||
                  (result[i] >= '0' && result[i] <= '9'))) {

            special++;
            valid = false;
        }
    }

    cout << "Normalized String = " << result << endl;
    cout << "Total Words = " << words << endl;
    cout << "Total Digits = " << digits << endl;
    cout << "Total Special Characters = " << special << endl;

    if(valid)
        cout << "Valid String";
    else
        cout << "Invalid String";

    return 0;
}
