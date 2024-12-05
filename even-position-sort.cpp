#include <iostream>
#include <vector>
using namespace std;

bool is_even(int number);
void bubble_sort(vector<int> &array);

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    vector<int> even_postion_number;
    vector<int> even_position_index;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (is_even(i))
        {
            even_postion_number.push_back(array[i]);
            even_position_index.push_back(i);
        }
    }

    bubble_sort(even_postion_number);

    for (long unsigned int i = 0; i < even_position_index.size(); i++)
    {
        array[even_position_index[i]] = even_postion_number[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}

void bubble_sort(vector<int> &array)
{
    for (long unsigned int i = 0; i < array.size(); i++)
    {
        for (long unsigned int j = 0; j < array.size() - 1; j++)
        {
            if (array[j] < array[j + 1])
                swap(array[j], array[j + 1]);
        }
    }
}

bool is_even(int number)
{
    return number % 2 == 0;
}