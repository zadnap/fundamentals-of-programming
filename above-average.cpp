#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    int list[n];

    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
        sum += list[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (list[i] >= (double)sum / n)
        {
            cout << fixed << setprecision(2) << (double)list[i] << " ";
        }
    }

    return 0;
}