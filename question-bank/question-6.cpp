#include <iostream>
using namespace std;

int getSum(int *a, int n);

int main()
{
    return 0;
}

int getSum(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}
