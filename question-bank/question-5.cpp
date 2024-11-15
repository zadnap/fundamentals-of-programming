#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double distance_in_map, map_distance_rate;

    cin >> distance_in_map >> map_distance_rate;

    const int CENTIMETER_TO_METER = 100;
    double distance_in_reality = distance_in_map / map_distance_rate / CENTIMETER_TO_METER;

    cout << fixed << setprecision(1) << distance_in_reality << endl;

    return 0;
}
