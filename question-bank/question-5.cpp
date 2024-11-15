#include <iostream>
using namespace std;

int compute_factorial(int n);

int main()
{
    int n, sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += compute_factorial(i);
    }

    cout << sum << endl;

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