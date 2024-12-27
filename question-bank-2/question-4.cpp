#include <iostream>
using namespace std;

int sumOfSquares(int n);

int main()
{
    int n;
    cin >> n;

    cout << sumOfSquares(n);
    return 0;
}

int sumOfSquares(int n)
{
    if (n == 1)
        return 1;
    return n * n + sumOfSquares(n - 1);
}