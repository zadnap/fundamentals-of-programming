#include <iostream>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    int seats[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> seats[i][j];
        }
    }

    int i, j;

    cin >> i >> j;

    if (seats[i - 1][j - 1] == 0)
    {
        cout << "Your seat is booked. Please complete the payment." << endl;
    }
    else
    {
        cout << "Seat " << i << j << " is sold." << endl;
    }

    return 0;
}