#include <iostream>
using namespace std;
int main() {
    int n;
    float basicSalary, bonus, netSalary;
    cout << "Enter number of employees: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter basic salary of Employee " << i << ": ";
        cin >> basicSalary;
        bonus = 0.12 * basicSalary;
        netSalary = basicSalary + bonus;
        cout << "Employee " << i << " -> Bonus: " << bonus << ", Net Salary: " << netSalary << endl;
    }
    return 0;
}
