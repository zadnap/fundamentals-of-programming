#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    return 0;
}

void printImage(int **img, int height, int width)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << setw(4) << img[i][j];
        }
        cout << endl;
    }
}