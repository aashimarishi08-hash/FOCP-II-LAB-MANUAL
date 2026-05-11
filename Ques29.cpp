#include <iostream>
using namespace std;

int main() {

    int temp[30], min;

    cout << "Enter 30 temperatures:" << endl;

    for(int i = 0; i < 30; i++)
        cin >> temp[i];

    min = temp[0];

    for(int i = 1; i < 30; i++) {

        if(temp[i] < min)
            min = temp[i];
    }

    cout << "Minimum Temperature = " << min;

    return 0;
}
