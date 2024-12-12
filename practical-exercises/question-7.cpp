#include <iostream>
using namespace std;

int *getPointerToArray(int n);

int main()
{
    int n;
    cin >> n;

    int *arrayPtr = getPointerToArray(n);

    for (int i = 0; i < n; i++)
        cout << *(arrayPtr + i) << " ";

    return 0;
}

int *getPointerToArray(int n)
{
    int *arrayPtr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> *(arrayPtr + i);
    }

    return arrayPtr;
}