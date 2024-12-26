#include <iostream>
#include <vector>
using namespace std;

bool isHappyNumber(int n);
int get_sum_of_squared_digits(int num);
bool found_number_repeat(vector<int> seenNumbers, int num);

int main()
{
    int n;
    cin >> n;

    cout << isHappyNumber(n);

    return 0;
}

bool isHappyNumber(int n)
{
    vector<int> seenNumbers;

    while (get_sum_of_squared_digits(n) != 1)
    {
        if (found_number_repeat(seenNumbers, n))
            return false;

        seenNumbers.push_back(n);
        n = get_sum_of_squared_digits(n);
    }

    return true;
}

int get_sum_of_squared_digits(int num)
{
    int sum = 0;

    while (num > 0)
    {
        int last_digit = num % 10;
        sum += last_digit * last_digit;
        num = num / 10;
    }

    return sum;
}

bool found_number_repeat(vector<int> seenNumbers, int num)
{
    for (int seenNumb : seenNumbers)
        if (num == seenNumb)
            return true;

    return false;
}