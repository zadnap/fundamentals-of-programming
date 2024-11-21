#include <iostream>
#include <utility>
#include <vector>

using namespace std;

pair<int, int> countEvenAndOddDigits(int number);

int main()
{
    int n, count = 0;
    vector<pair<int, int>> results;

    cin >> n;

    while (count < n)
    {
        long long number;

        cin >> number;

        auto result = countEvenAndOddDigits(number);
        results.push_back(result);
        count++;
    }

    for (pair<int, int> res : results)
    {
        cout << res.first << " " << res.second << endl;
    }

    return 0;
}

pair<int, int> countEvenAndOddDigits(int number)
{
    int even_sum = 0;
    int odd_sum = 0;

    while (number != 0)
    {
        int last_digit = number % 10;
        if (last_digit % 2 == 0)
        {
            even_sum++;
        }
        else
        {
            odd_sum++;
        }
        number = number / 10;
    }

    return {even_sum, odd_sum};
}
