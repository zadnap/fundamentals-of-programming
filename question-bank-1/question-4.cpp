#include <iostream>

using namespace std;

int main()
{
    int n, count_odd = 0, count_even = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        if (number % 2 == 0)
            count_even++;
        else
            count_odd++;
    }

    cout << count_even << " " << count_odd << endl;

    return 0;
}