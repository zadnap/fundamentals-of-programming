#include <iostream>
#include <cmath>
using namespace std;

int compute_greatest_common_divisor(int a, int b);

int main() 
{
    int m, n, greatest_common_divisor;

    cin >> m >> n;

    if (m >= n) {
        greatest_common_divisor = compute_greatest_common_divisor(m, n);
    }
    else 
    {
        greatest_common_divisor = compute_greatest_common_divisor(n, m);
    }

    cout << greatest_common_divisor << endl;

    return 0;
}

int compute_greatest_common_divisor(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return abs(a);
}