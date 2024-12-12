#include <iostream>
using namespace std;

void inputMatrix(int **matrix, int nRows, int nCols);
int isSymmetric(int **matrix, int nRows, int nCols);

int main()
{
    int row, col;
    cin >> row >> col;

    int **matrix = new int *[row];
    inputMatrix(matrix, row, col);

    cout << isSymmetric(matrix, row, col) << endl;

    return 0;
}

void inputMatrix(int **matrix, int nRows, int nCols)
{
    for (int i = 0; i < nRows; i++)
    {
        matrix[i] = new int[nCols];
        for (int j = 0; j < nCols; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int isSymmetric(int **matrix, int nRows, int nCols)
{
    if (nRows != nCols)
        return false;

    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
                return 0;
        }
    }

    return 1;
}