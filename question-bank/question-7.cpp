#include <iostream>
using namespace std;

int main()
{
    const int FIRST_KM_FARE = 7000;
    const int FARE_UNDER_30_KM = 5000;
    const int FARE_OVER_30_KM = 3000;

    int km, total_fare = 0;

    cin >> km;

    if (km > 30)
    {
        total_fare += FIRST_KM_FARE + 29 * FARE_UNDER_30_KM + (km - 30) * FARE_OVER_30_KM;
    }
    else
    {
        total_fare += FIRST_KM_FARE + (km - 1) * FARE_UNDER_30_KM;
    }

    cout << total_fare << endl;
}