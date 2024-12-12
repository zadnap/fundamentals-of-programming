#include <iostream>
using namespace std;

int **inputMatrix(int nRows, int nCols);
void printMatrix(int **matrix, int nRows, int nCols);
void freeMatrix(int **matrix, int nRows);

int main()
{
    int row, col;
    cin >> row >> col;

    int **matrix = inputMatrix(row, col);
    printMatrix(matrix, row, col);
    freeMatrix(matrix, row);

    return 0;
}

int **inputMatrix(int nRows, int nCols)
{
    int **matrix = new int *[nRows];

    for (int i = 0; i < nRows; i++)
    {
        matrix[i] = new int[nCols];
        for (int j = 0; j < nCols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

void printMatrix(int **matrix, int nRows, int nCols)
{
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void freeMatrix(int **matrix, int nRows)
{
    for (int i = 0; i < nRows; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}