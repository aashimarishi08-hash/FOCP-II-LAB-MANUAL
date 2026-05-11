#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string id;
    cout << "Enter ID: ";
    cin >> id;
    string rev = id;
    reverse(rev.begin(), rev.end());
    if (id == rev)
        cout << id << " is a Palindrome" << endl;
    else
        cout << id << " is NOT a Palindrome" << endl;
    return 0;
}
