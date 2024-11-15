#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double money_in_vnd;

    cin >> money_in_vnd;

    const double USD_TO_VND_RATE = 22765;
    double money_in_usd = money_in_vnd / USD_TO_VND_RATE;

    cout << fixed << setprecision(2) << money_in_usd << endl;

    return 0;
}