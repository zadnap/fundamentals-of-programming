#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    double matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int k;
    cin >> k;

    double sum = 0;
    for (int col = 0; col < n; col++)
    {
        sum += matrix[k - 1][col];
    }

    cout << fixed << setprecision(2) << sum;

    return 0;
}