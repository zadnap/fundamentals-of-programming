#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double max, min;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double price;

        cin >> price;

        if (i == 0)
        {
            max = price;
            min = price;
        }

        if (price > max)
        {
            max = price;
        }

        if (price < min)
        {
            min = price;
        }
    }

    cout << fixed << setprecision(2) << max << " " << min;

    return 0;
}