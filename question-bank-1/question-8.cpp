#include <iostream>
#include <iomanip>
using namespace std;

void sort(float array[], int size, bool isAscending);

int main()
{
    int n;
    cin >> n;

    float array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    sort(array, n, true);

    for (int i = 0; i < n; i++)
        cout << fixed << setprecision(2) << array[i] << " ";

    return 0;
}

void sort(float array[], int size, bool isAscending)
{
    for (int i = 0; i < size; i++)
    {
        int pick_up_index = i;
        for (int j = i; j < size; j++)
        {
            if (isAscending)
            {
                if (array[pick_up_index] > array[j])
                    pick_up_index = j;
            }
            else
            {
                if (array[pick_up_index] < array[j])
                    pick_up_index = j;
            }
        }

        swap(array[pick_up_index], array[i]);
    }
}