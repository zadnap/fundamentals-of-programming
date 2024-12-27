#include <iostream>
using namespace std;

int getFibonacciNumberAt(int n);

int main()
{
    int n;
    cin >> n;

    cout << getFibonacciNumberAt(n) << endl;

    return 0;
}

int getFibonacciNumberAt(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return getFibonacciNumberAt(n - 1) + getFibonacciNumberAt(n - 2);
}