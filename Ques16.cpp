#include <iostream>
using namespace std;
int main() {
    int n;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1) isPrime = false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) { isPrime = false; break; }
    }
    cout << n << (isPrime ? " is Prime" : " is NOT Prime") << endl;
    return 0;
}
