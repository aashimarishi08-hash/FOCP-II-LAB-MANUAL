#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c, disc, r1, r2;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    disc = b * b - 4 * a * c;
    if (disc > 0) {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        cout << "Two real roots: " << r1 << " and " << r2 << endl;
    } else if (disc == 0) {
        r1 = -b / (2 * a);
        cout << "One repeated root: " << r1 << endl;
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-disc) / (2 * a);
        cout << "Complex roots: " << real << "+" << imag << "i and "
             << real << "-" << imag << "i" << endl;
    }
    return 0;
}
