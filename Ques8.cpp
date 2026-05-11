#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << i << ": Buzz Fuzz" << endl;
        else if (i % 3 == 0)
            cout << i << ": Buzz" << endl;
        else if (i % 5 == 0)
            cout << i << ": Fuzz" << endl;
        else
            cout << i << endl;
    }
    return 0;
}
