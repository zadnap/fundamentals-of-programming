#include <iostream>
using namespace std;

void selection_sort(int *array, int size, bool asc);
int *merge(int *firstArr, int lenArr1, int *secondArr, int lenArr2);
void delete_merge_array(int *merge_array);

int main()
{
    int n1;
    cin >> n1;

    int firstArr[n1];
    for (int i = 0; i < n1; i++)
        cin >> firstArr[i];

    int n2;
    cin >> n2;

    int secondArr[n2];
    for (int i = 0; i < n2; i++)
        cin >> secondArr[i];

    int *merge_array = merge(firstArr, n1, secondArr, n2);

    for (int i = 0; i < n1 + n2; i++)
        cout << merge_array[i] << " ";

    delete_merge_array(merge_array);

    return 0;
}

int *merge(int *firstArr, int lenArr1, int *secondArr, int lenArr2)
{
    int *merge_array = new int[lenArr1 + lenArr2];

    for (int i = 0; i < lenArr1; i++)
    {
        merge_array[i] = firstArr[i];
    }
    for (int i = 0; i < lenArr2; i++)
    {
        merge_array[lenArr1 + i] = secondArr[i];
    }

    selection_sort(merge_array, lenArr1 + lenArr2, firstArr[0] < firstArr[1]);

    return merge_array;
}

void delete_merge_array(int *merge_array)
{
    delete[] merge_array;
}

void selection_sort(int *array, int size, bool asc)
{
    for (int i = 0; i < size; i++)
    {
        int pickup_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (asc)
            {
                if (array[j] < array[pickup_index])
                    pickup_index = j;
            }
            else
            {
                if (array[j] > array[pickup_index])
                    pickup_index = j;
            }
        }

        swap(array[i], array[pickup_index]);
    }
}