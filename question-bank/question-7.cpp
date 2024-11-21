#include <iostream>

using namespace std;

void printFloydsTriangle(int nRows);

int main()
{
    int n;

    cin >> n;

    printFloydsTriangle(n);
    return 0;
}

void printFloydsTriangle(int nRows)
{
    int index = 1;
    int count = 1;
    for (int i = 1; i <= nRows; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            cout << index << " ";
            index++;
        }
        cout << endl;
        count++;
    }
}