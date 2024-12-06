#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;

    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int i, j, x;
    cin >> i >> j >> x;

    matrix[i - 1][j - 1] = x;

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