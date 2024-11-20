#include <iostream>

using namespace std;

string is_prime(int number);

int main()
{
    int number;
    cin >> number;

    cout << is_prime(number);

    return 0;
}

string is_prime(int number)
{
    if (number <= 1)
        return "Not a prime.";

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return "Not a prime.";
    }

    return "Prime.";
}