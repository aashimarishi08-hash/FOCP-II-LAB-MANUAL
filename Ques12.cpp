#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << "Equilateral Triangle" << endl;
    else if (a == b || b == c || a == c)
        cout << "Isosceles Triangle" << endl;
    else
        cout << "Scalene Triangle" << endl;
    return 0;
}
