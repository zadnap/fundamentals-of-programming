#include <iostream>
#include <iomanip>
#include <climits>

using namespace std;

int main()
{
    int n, max = 0, min = INT_MAX, sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        sum += number;

        if (number > max)
        {
            max = number;
        }
        if (number < min)
        {
            min = number;
        }
    }

    double average = (double)sum / n;

    cout << fixed << setprecision(2) << average << endl;
    cout << max << endl
         << min << endl;

    return 0;
}