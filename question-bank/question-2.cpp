#include <iostream>
#include <vector>

using namespace std;

bool check_full_odd(int number);
bool check_full_even(int number);

int main()
{
    int n, count = 0;
    vector<string> results;

    cin >> n;

    while (count < n)
    {
        long long number;

        cin >> number;

        bool is_full_odd = check_full_odd(number);
        bool is_full_even = check_full_even(number);

        results.push_back(is_full_odd || is_full_even ? "yes" : "no");

        count++;
    }

    for (string res : results)
    {
        cout << res << endl;
    }
    return 0;
}

bool check_full_odd(int number)
{
    while (number > 0)
    {
        int digit = number % 10;

        if (digit % 2 == 0)
        {
            return false;
        }

        number = number / 10;
    }

    return true;
}

bool check_full_even(int number)
{
    while (number > 0)
    {
        int digit = number % 10;

        if (digit % 2 != 0)
        {
            return false;
        }

        number = number / 10;
    }

    return true;
}