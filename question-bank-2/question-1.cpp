#include <iostream>
using namespace std;

int sum_of_odds(int number);

int main()
{
    int n;
    cin >> n;

    cout << sum_of_odds(n) << endl;

    return 0;
}

int sum_of_odds(int n)
{
    if (n == 1)
        return 4;
    return (2 * n + 1) + sum_of_odds(n - 1);
}