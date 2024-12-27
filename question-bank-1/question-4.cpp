#include <iostream>
using namespace std;

bool isPerfect(int number);

int main()
{
    int n;
    cin >> n;

    cout << isPerfect(n) << endl;

    return 0;
}

bool isPerfect(int number)
{
    int sum_of_divisors = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum_of_divisors += i;
    }

    return sum_of_divisors == number;
}