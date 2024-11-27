#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    int products[n];

    for (int i = 0; i < n; i++)
    {
        cin >> products[i];
        sum += products[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (products[i] >= (double)sum / n)
        {
            cout << products[i] << " ";
        }
    }

    return 0;
}
