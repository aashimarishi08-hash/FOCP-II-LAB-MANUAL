#include <iostream>
using namespace std;

int main() {

    int m, n, p, q;

    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;

    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;

    if(n != p) {
        cout << "Matrix multiplication not possible";
        return 0;
    }

    int a[10][10], b[10][10], result[10][10];

    cout << "Enter first matrix:" << endl;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter second matrix:" << endl;

    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < m; i++) {

        for(int j = 0; j < q; j++) {

            result[i][j] = 0;

            for(int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Result Matrix:" << endl;

    for(int i = 0; i < m; i++) {

        for(int j = 0; j < q; j++) {
            cout << result[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
