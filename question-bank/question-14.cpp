#include <iostream>
using namespace std;

int **transpose(int **matrix, int m, int n);

int main()
{
    int row, col;
    cin >> row >> col;

    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int **transpose_matrix = transpose(matrix, row, col);
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int **transpose(int **matrix, int m, int n)
{
    int **transpose_matrix = new int *[n];

    for (int i = 0; i < n; i++)
    {
        transpose_matrix[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            transpose_matrix[i][j] = matrix[j][i];
        }
    }

    return transpose_matrix;
}