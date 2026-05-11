Q3. Temperature Conversion (Celsius <-> Fahrenheit)
#include <iostream>
using namespace std;
int main() {
    int choice;
    float temp;
    cout << "1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\nChoice: ";
    cin >> choice;
    cout << "Enter temperature: ";
    cin >> temp;
    if (choice == 1)
        cout << "Celsius: " << (temp - 32) * 5 / 9 << endl;
    else
        cout << "Fahrenheit: " << (temp * 9 / 5) + 32 << endl;
    return 0;
}
