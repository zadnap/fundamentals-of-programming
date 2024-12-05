#include <iostream>
#include <vector>
using namespace std;

void ascending_sort(vector<int> &array);

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++)
        cin >> array[i];

    ascending_sort(array);

    for (int element : array)
        cout << element << " ";

    return 0;
}

void ascending_sort(vector<int> &array)
{
    int n = array.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (array[j + 1] < array[j])
                swap(array[j + 1], array[j]);
        }
    }
}