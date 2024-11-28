#include <iostream>

using namespace std;

void readArray(int array[], int n);
bool compareArray(int array1[], int array2[], int n);

int main()
{
    int n;
    cin >> n;
    int array1[n], array2[n];
    readArray(array1, n);
    readArray(array2, n);
    if (compareArray(array1, array2, n))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}

void readArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
}

bool compareArray(int array1[], int array2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (array1[i] != array2[i])
            return false;
    }

    return true;
}