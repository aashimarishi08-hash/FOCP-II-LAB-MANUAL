#include <iostream>
using namespace std;
int main() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Method 1: Using temp variable
    temp = a; a = b; b = temp;
    cout << "After swap (temp): a=" << a << " b=" << b << endl;

    // Method 2: Using arithmetic
    a = a + b; b = a - b; a = a - b;
    cout << "After swap (arithmetic): a=" << a << " b=" << b << endl;

    // Method 3: Using XOR
    a = a ^ b; b = a ^ b; a = a ^ b;
    cout << "After swap (XOR): a=" << a << " b=" << b << endl;

    return 0;
}
