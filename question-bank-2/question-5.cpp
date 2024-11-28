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

    for (int row = 0; row < m; row++)
    {
        for (int j = i - 1; j < n; j++)
        {
            matrix[row][j] = matrix[row][j + 1];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}