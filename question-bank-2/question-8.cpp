#include <iostream>
using namespace std;

int fibonaccciRecursive(int n);

int main()
{
    int n;
    cin >> n;

    cout << fibonaccciRecursive(n);

    return 0;
}

int fibonaccciRecursive(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return 2 * fibonaccciRecursive(n - 1) + fibonaccciRecursive(n - 2) + 1;
}