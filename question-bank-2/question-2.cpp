#include <iostream>
using namespace std;

long long productOfOdds(int n);

int main()
{
    int n;
    cin >> n;

    cout << productOfOdds(n) << endl;

    return 0;
}

long long productOfOdds(int n)
{
    if (n == 1)
        return 3;
    return (2 * n + 1) * productOfOdds(n - 1);
}