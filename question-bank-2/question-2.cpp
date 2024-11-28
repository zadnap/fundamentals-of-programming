#include <iostream>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    int matrix[m][n + 1];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int i, x;

    cin >> i >> x;

    for (int row = 0; row < m; row++)
    {
        for (int col = n; col > i - 1; col--)
        {
            matrix[row][col] = matrix[row][col - 1];
        }
        matrix[row][i - 1] = x;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}