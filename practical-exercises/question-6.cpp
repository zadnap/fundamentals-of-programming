#include <iostream>
using namespace std;

void multiply(int *n, int k);

int main()
{
    int n, k;
    cin >> n >> k;

    multiply(&n, k);

    cout << n << endl;

    return 0;
}

void multiply(int *n, int k)
{
    *n = *n * k;
}