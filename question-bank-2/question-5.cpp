#include <iostream>
#include <cmath>
using namespace std;

int exponentialExpression(int n);

int main()
{
    int n;
    cin >> n;

    cout << exponentialExpression(n);
    return 0;
}

int exponentialExpression(int n)
{
    if (n == 1)
        return 1;
    return pow(n, n) + exponentialExpression(n - 1);
}