#include <iostream>
#include <cmath>

using namespace std;

int compute_cofactor(int row, int col, int matrix[3][3]);
int compute_minor_determinant(int matrix[2][2]);

int main()
{
    int determinant = 0;
    int matrix[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        determinant += matrix[0][i] * compute_cofactor(1, i + 1, matrix);
    }

    cout << determinant << endl;

    return 0;
}

int compute_cofactor(int row, int col, int matrix[3][3])
{
    int minor_matrix[2][2];
    int minor_row = 0;

    for (int i = 0; i < 3; i++)
    {
        if (i == row - 1)
            continue;
        int minor_col = 0;
        for (int j = 0; j < 3; j++)
        {
            if (j == col - 1)
                continue;
            minor_matrix[minor_row][minor_col++] = matrix[i][j];
        }
        minor_row++;
    }

    return pow(-1, row + col) * compute_minor_determinant(minor_matrix);
}

int compute_minor_determinant(int minor_matrix[2][2])
{
    return minor_matrix[0][0] * minor_matrix[1][1] - minor_matrix[0][1] * minor_matrix[1][0];
}