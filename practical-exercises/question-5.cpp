#include <iostream>
using namespace std;

int **getImage(int nRows, int nCols);
void fillImage(int **image, int nRows, int nCols, int threshold);
void print(int **image, int nRows, int nCols);
void freeImage(int **image, int nRows);

int main()
{
    int row, col;
    cin >> row >> col;

    int **image = getImage(row, col);

    int threshold;
    cin >> threshold;

    fillImage(image, row, col, threshold);
    print(image, row, col);
    freeImage(image, row);

    return 0;
}

int **getImage(int nRows, int nCols)
{
    int **image = new int *[nRows];
    for (int i = 0; i < nRows; i++)
    {
        image[i] = new int[nCols];
        for (int j = 0; j < nCols; j++)
        {
            cin >> image[i][j];
        }
    }

    return image;
}

void fillImage(int **image, int nRows, int nCols, int threshold)
{
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            if (image[i][j] < threshold)
                image[i][j] = 0;
        }
    }
}

void print(int **image, int nRows, int nCols)
{
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
}

void freeImage(int **image, int nRows)
{
    for (int i = 0; i < nRows; i++)
    {
        delete[] image[i];
    }
    delete[] image;
}