#include <iostream>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    int matrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int i;

    cin >> i;

    for (int col = 0; col < n; col++)
    {
        for (int row = i - 1; row < m; row++)
        {
            matrix[row][col] = matrix[row + 1][col];
        }
    }

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}