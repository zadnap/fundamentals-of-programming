#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double temperature, wind_speed;

    cin >> temperature >> wind_speed;

    double actual_temperature = 35.74 + 0.6215 * temperature + (0.4275 * temperature - 35.75) * pow(wind_speed, 0.16);

    cout << fixed << setprecision(2) << actual_temperature << endl;

    return 0;
}
