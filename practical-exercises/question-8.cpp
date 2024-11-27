#include <iostream>

using namespace std;

int main()
{
    int m, n, Q;

    cin >> m >> n >> Q;

    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int questions[Q][2];
    for (int i = 0; i < Q; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> questions[i][j];
        }
    }

    for (int i = 0; i < Q; i++)
    {
        cout << matrix[questions[i][0] - 1][questions[i][1] - 1] << endl;
    }

    return 0;
}