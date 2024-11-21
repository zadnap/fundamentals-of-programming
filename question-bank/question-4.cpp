#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_prime_digit(int number);

vector<int> prime_digits = {2, 3, 5, 7};

int main()
{
    int n, count = 0;
    vector<int> results;

    cin >> n;

    while (count < n)
    {
        int number;

        cin >> number;

        results.push_back(count_prime_digit(number));

        count++;
    }

    for (int res : results)
    {
        cout << res << endl;
    }

    return 0;
}

int count_prime_digit(int number)
{
    int count = 0;
    while (number > 0)
    {
        int digit = number % 10;
        if (find(prime_digits.begin(), prime_digits.end(), digit) != prime_digits.end())
            count++;
        number = number / 10;
    }

    return count;
}
