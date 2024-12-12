#include <iostream>
using namespace std;

int **keepEven(int **matrix, int nRows, int nCols);

int main()
{
    int row, col;
    cin >> row >> col;

    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int(col);
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int **even_matrix = keepEven(matrix, row, col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << even_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int **keepEven(int **matrix, int nRows, int nCols)
{
    int **new_matrix = new int *[nRows];

    for (int i = 0; i < nRows; i++)
    {
        new_matrix[i] = new int[nCols];
        for (int j = 0; j < nCols; j++)
        {
            if (matrix[i][j] % 2 != 0)
                new_matrix[i][j] = 0;
            else
                new_matrix[i][j] = matrix[i][j];
        }
    }

    return new_matrix;
}