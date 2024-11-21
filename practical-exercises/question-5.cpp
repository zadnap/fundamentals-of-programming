#include <iostream>
#include <vector>

using namespace std;

int sum_of_divisors(int number);

int main()
{
    int n, count = 0, number;
    vector<int> results;

    cin >> n;

    while (count < n)
    {
        cin >> number;
        results.push_back(sum_of_divisors(number));
        count++;
    }

    for (int res : results)
    {
        cout << res << endl;
    }

    return 0;
}

int sum_of_divisors(int number)
{
    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            sum += i;
    }

    return sum;
}