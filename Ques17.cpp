#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, temp, digits = 0, sum = 0, rem;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;

    // Armstrong Check
    int t = n;
    while (t != 0) { digits++; t /= 10; }
    t = n;
    while (t != 0) {
        rem = t % 10;
        sum += pow(rem, digits);
        t /= 10;
    }
    if (sum == n) cout << n << " is an Armstrong number" << endl;
    else cout << n << " is NOT an Armstrong number" << endl;

    // Perfect Number Check
    sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0) sum += i;
    if (sum == n) cout << n << " is a Perfect number" << endl;
    else cout << n << " is NOT a Perfect number" << endl;

    return 0;
}
