#include <iostream>

using namespace std;

int main()
{
    int n, count_positive = 0, count_negative = 0, count_zero = 0;

    cin >> n;

    while (n > 0)
    {
        int number;
        cin >> number;
        if (number > 0)
        {
            count_positive++;
        }
        else if (number < 0)
        {
            count_negative++;
        }
        else
        {
            count_zero++;
        }
        n--;
    }

    cout << count_negative << " " << count_positive << " " << count_zero;

    return 0;
}