#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double originalPrice, discountAmount, finalPrice;


    cout << "Enter the original price of the product: $";
    cin >> originalPrice;


    if (originalPrice > 100) {
        discountAmount = originalPrice * 0.10;
    } else {
        discountAmount = 0.0;
    }


    finalPrice = originalPrice - discountAmount;


    cout << fixed << setprecision(2);
    cout << "Original price: $" << originalPrice << endl;
    cout << "Discount amount: $" << discountAmount << endl;
    cout << "Final price: $" << finalPrice << endl;

    return 0;
}
