#include <iostream>
using namespace std;

int compute_arithmetic_sequence(int n);

int main()
{
    int n, sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += compute_arithmetic_sequence(i);
    }

    cout << sum;

    return 0;
}

int compute_arithmetic_sequence(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + compute_arithmetic_sequence(n - 1);
}