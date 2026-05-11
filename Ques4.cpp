
#include <iostream>
using namespace std;
int main() {
    int itemNo, qty;
    float unitPrice, total, discount, finalAmount;
    cout << "Enter Item No, Quantity, Unit Price: ";
    cin >> itemNo >> qty >> unitPrice;
    total = qty * unitPrice;
    discount = 0.20 * total;
    finalAmount = total - discount;
    cout << "Total: " << total << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Final Amount: " << finalAmount << endl;
    return 0;
}
