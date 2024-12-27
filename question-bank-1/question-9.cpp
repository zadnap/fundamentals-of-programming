#include <iostream>
using namespace std;

int Median(int a[], int n);

int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
        cin >> array[i];

    cout << Median(array, 5);

    return 0;
}

int Median(int a[], int n)
{
    if (a[0] > a[1])
        swap(a[0], a[1]);
    if (a[2] > a[3])
        swap(a[2], a[3]);
    if (a[1] > a[4])
        swap(a[1], a[4]);
    if (a[3] > a[4])
        swap(a[3], a[4]);
    if (a[0] > a[2])
        swap(a[0], a[2]);
    if (a[1] > a[2])
        swap(a[1], a[2]);

    return a[2];
}
