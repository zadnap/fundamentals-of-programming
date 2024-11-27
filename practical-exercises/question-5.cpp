#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cin >> n;

    double days[n];

    for (int i = 0; i < n; i++)
    {
        cin >> days[i];
    }

    for (int i = 1; i < n; i++)
    {
        cout << fixed << setprecision(2) << abs(days[i] - days[i - 1]) << " ";
    }
    return 0;
}