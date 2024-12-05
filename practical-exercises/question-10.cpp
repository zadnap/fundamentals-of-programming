#include <iostream>
#include <vector>
using namespace std;

int findLHS(int arr[], int n);
void ascending_sort(int array[], int n);

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    cout << findLHS(array, n);

    return 0;
}

int findLHS(int arr[], int n)
{
    int max_length = 0;
    ascending_sort(arr, n);

    int start_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - arr[start_index] > 1)
        {
            if (i - start_index > max_length)
            {
                max_length = i - start_index;
            }
            start_index = i;
        }
    }

    return max_length;
}

void ascending_sort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);
        }
    }
}