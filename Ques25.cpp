#include <iostream>
using namespace std;

int main() {

    int start, end, i, j, prime;

    cout << "Enter starting limit: ";
    cin >> start;

    cout << "Enter ending limit: ";
    cin >> end;

    cout << "Prime Numbers are:" << endl;

    for(i = start; i <= end; i++) {

        if(i <= 1)
            continue;

        prime = 1;

        for(j = 2; j < i; j++) {

            if(i % j == 0) {
                prime = 0;
                break;
            }
        }

        if(prime == 1)
            cout << i << " ";
    }

    return 0;
}
