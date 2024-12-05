#include <iostream>
#include <vector>
using namespace std;

bool is_odd(int number);
void bubble_sort(vector<int> &array);

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    vector<int> odd_numbers;
    vector<int> odd_indexes;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (is_odd(array[i]))
        {
            odd_numbers.push_back(array[i]);
            odd_indexes.push_back(i);
        }
    }

    bubble_sort(odd_numbers);

    for (long unsigned int i = 0; i < odd_numbers.size(); i++)
    {
        array[odd_indexes[i]] = odd_numbers[i];
    }

    for (int element : array)
    {
        cout << element << " ";
    }

    return 0;
}

bool is_odd(int number)
{
    return number % 2 != 0;
}

void bubble_sort(vector<int> &array)
{
    for (long unsigned int i = 0; i < array.size(); i++)
    {
        for (long unsigned int j = 0; j < array.size() - 1; j++)
        {
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);
        }
    }
}