#include <cmath>

bool isPrime(int n)
{
    int positive_n = abs(n);

    if (positive_n <= 1)
        return false;

    for (int i = 2; i <= sqrt(positive_n); i++)
        if (positive_n % i == 0)
            return false;

    return true;
}