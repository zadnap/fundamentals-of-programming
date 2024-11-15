#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, i);
    }

    cout << sum;
    return 0;
}