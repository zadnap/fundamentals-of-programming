#include <iostream>
#include <vector>

using namespace std;

int get_max_odd_divisor(int number);

int main()
{
    int n, count = 0;
    vector<int> results;

    cin >> n;

    while (count < n)
    {
        int number;

        cin >> number;

        results.push_back(get_max_odd_divisor(number));

        count++;
    }

    for (int res : results)
    {
        cout << res << endl;
    }

    return 0;
}

int get_max_odd_divisor(int number)
{
    int max_odd_divisor;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0 && i % 2 != 0)
        {
            max_odd_divisor = i;
        }
    }

    return max_odd_divisor;
}