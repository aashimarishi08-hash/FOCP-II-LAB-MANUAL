#include <iostream>
using namespace std;
int main() {
    int qty;
    float unitPrice, total, discount = 0, finalAmount;
    cout << "Enter quantity and unit price: ";
    cin >> qty >> unitPrice;
    total = qty * unitPrice;
    if (qty > 1000)
        discount = 0.10 * total;
    finalAmount = total - discount;
    cout << "Total: " << total << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount: " << finalAmount << endl;
    return 0;
}
