#include <iostream>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    int matrix[m + 1][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int i, x;

    cin >> i >> x;

    for (int col = 0; col < n; col++)
    {
        for (int row = m; row > i - 1; row--)
        {
            matrix[row][col] = matrix[row - 1][col];
        }

        matrix[i - 1][col] = x;
    }

    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}