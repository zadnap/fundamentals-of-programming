#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double height[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> height[i];
    }
    double max_height = height[0];
    double min_height = height[0];
    double sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += height[i];
        if (height[i] > max_height)
            max_height = height[i];
        if (height[i] < min_height)
            min_height = height[i];
    }

    cout << fixed << setprecision(2) << max_height << " " << min_height << " " << (sum / 5) << endl;

    return 0;
}