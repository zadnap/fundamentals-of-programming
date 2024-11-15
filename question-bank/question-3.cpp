#include <iostream>
#include <iomanip>
using namespace std;

int compute_factorial(int n);

int main()
{
    int n;
    double sum = 1;

    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        sum += (double)1 / compute_factorial(i);
    }

    cout << fixed << setprecision(5) << sum;

    return 0;
}

int compute_factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * compute_factorial(n - 1);
}