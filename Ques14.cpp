#include <iostream>
using namespace std;
int main() {
    int choice;
    float a, b;
    do {
        cout << "\n1. Add  2. Subtract  3. Multiply  4. Divide  5. Exit\nChoice: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        switch (choice) {
            case 1: cout << "Result: " << a + b << endl; break;
            case 2: cout << "Result: " << a - b << endl; break;
            case 3: cout << "Result: " << a * b << endl; break;
            case 4:
                if (b != 0) cout << "Result: " << a / b << endl;
                else cout << "Division by zero!" << endl;
                break;
            case 5: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);
    return 0;
}
