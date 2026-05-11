#include <iostream>
using namespace std;
int main() {
    float s1, s2, s3;
    cout << "Enter scores of 3 players: ";
    cin >> s1 >> s2 >> s3;
    if (s1 >= s2 && s1 >= s3)
        cout << "Player 1 wins with score " << s1 << endl;
    else if (s2 >= s1 && s2 >= s3)
        cout << "Player 2 wins with score " << s2 << endl;
    else
        cout << "Player 3 wins with score " << s3 << endl;
    return 0;
}
