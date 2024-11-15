#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double sum = 0;

    cin >> n;

    for (double i = 1; i <= n; i++)
    {
        sum += i / (i + 1);
    }

    cout << fixed << setprecision(5) << sum << endl;

    return 0;
}