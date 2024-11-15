#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int DELIVERY_FEE = 10;
    const double CUSTOM_DUTY = 30.0 / 100.0;
    const double VAT = 10.0 / 100.0;
    double product_price;

    cin >> product_price;

    double total_price = product_price + DELIVERY_FEE + product_price * CUSTOM_DUTY + product_price * VAT;

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}
