#include <iostream>
#include <iomanip>
using namespace std;

double harmonic(int n);

int main()
{
    int n;
    cin >> n;

    cout << fixed << setprecision(2) << harmonic(n);

    return 0;
}

double harmonic(int n)
{
    double harmonicNumber = 0;

    for (double i = 1; i <= n; i++)
        harmonicNumber += 1 / i;

    return harmonicNumber;
}