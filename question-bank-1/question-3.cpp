#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        if (number % 3 == 0 && number % 5 == 0)
        {
            sum += number;
        }
    }

    cout << sum;

    return 0;
}