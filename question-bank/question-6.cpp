#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int AVERAGE_FLAT_PRICE_PER_M2 = 20;
    double area_of_flat;

    cin >> area_of_flat;

    double total_price = area_of_flat * AVERAGE_FLAT_PRICE_PER_M2;

    cout << fixed << setprecision(2) << total_price << endl;

    return 0;
}
