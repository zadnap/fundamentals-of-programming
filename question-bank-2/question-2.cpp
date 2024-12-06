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

    int i1, j1, i2, j2;
    cin >> i1 >> j1 >> i2 >> j2;

    swap(matrix[i1 - 1][j1 - 1], matrix[i2 - 1][j2 - 1]);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}