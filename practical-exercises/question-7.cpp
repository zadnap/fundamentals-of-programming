#include <iostream>

using namespace std;

void binaryRectangle(int nRows, int nCols);

int main()
{
    int row, col;
    cin >> row >> col;

    binaryRectangle(row, col);
    return 0;
}

void binaryRectangle(int nRows, int nCols)
{
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            if (i == 0 || j == 0 || i == nRows - 1 || j == nCols - 1)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
}