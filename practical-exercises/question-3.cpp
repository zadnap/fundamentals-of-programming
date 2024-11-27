#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    int list[n];

    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += list[i];
    }

    cout << sum;
    return 0;
}
