#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int findRadius(vector<int> houses, vector<int> heaters);

int main()
{
    long long numberOfHouses, numberOfHeaters;
    cin >> numberOfHouses >> numberOfHeaters;

    vector<int> houses(numberOfHouses), heaters(numberOfHeaters);
    for (long long i = 0; i < numberOfHouses; i++)
        cin >> houses[i];
    for (long long i = 0; i < numberOfHeaters; i++)
        cin >> heaters[i];

    cout << findRadius(houses, heaters);

    return 0;
}

int findRadius(vector<int> houses, vector<int> heaters)
{
    sort(houses.begin(), houses.end());
    sort(heaters.begin(), heaters.end());

    int radius = 0;

    for (int house : houses)
    {
        auto it = lower_bound(heaters.begin(), heaters.end(), house);

        int distRight = (it == heaters.end()) ? INT_MAX : abs(*it - house);

        int distLeft = (it == heaters.begin()) ? INT_MAX : abs(*(it - 1) - house);

        int minDist = min(distRight, distLeft);

        radius = max(radius, minDist);
    }

    return radius;
}