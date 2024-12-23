#include <iostream>
using namespace std;

void couplesOfNumbers(int array[], int n);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    couplesOfNumbers(arr, 5);

    return 0;
}

void couplesOfNumbers(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (array[i] % array[j] == 0)
                cout << array[i] << " " << array[j] << endl;
        }
    }
}