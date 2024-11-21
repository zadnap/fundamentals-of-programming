#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int sumOfDigits(int number);

int main()
{
    int i;

    cin >> i;

    cout << sumOfDigits(i) << endl;

    return 0;
}

int sumOfDigits(int number)
{
    int sum = 0;

    while (number > 0)
    {
        int digit = number % 10;
        sum += digit;
        number = number / 10;
    }

    return sum;
}