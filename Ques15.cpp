#include <iostream>
using namespace std;
int main() {
    int n;
    float num, max;
    cout << "Enter how many numbers: ";
    cin >> n;
    cout << "Enter number 1: ";
    cin >> max;
    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num > max) max = num;
    }
    cout << "Maximum: " << max << endl;
    return 0;
}
