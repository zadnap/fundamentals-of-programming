#include <iostream>
#include <vector>
using namespace std;

bool is_even(int number);
void bubble_sort(vector<int> &array, bool asc);

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    vector<int> evens;
    vector<int> odds;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (is_even(array[i]))
            evens.push_back(array[i]);
        else
            odds.push_back(array[i]);
    }

    bubble_sort(evens, false);
    bubble_sort(odds, true);

    vector<int> merged;
    for (long unsigned int i = 0; i < evens.size(); i++)
    {
        merged.push_back(evens[i]);
    }
    for (long unsigned int i = 0; i < odds.size(); i++)
    {
        merged.push_back(odds[i]);
    }

    for (int number : merged)
    {
        cout << number << " ";
    }

    return 0;
}

bool is_even(int number)
{
    return number % 2 == 0;
}

void bubble_sort(vector<int> &array, bool asc)
{
    for (long unsigned int i = 0; i < array.size(); i++)
    {
        for (long unsigned int j = 0; j < array.size() - 1; j++)
        {
            if (asc)
            {
                if (array[j] < array[j + 1])
                    swap(array[j], array[j + 1]);
            }
            else
            {
                if (array[j] > array[j + 1])
                    swap(array[j], array[j + 1]);
            }
        }
    }
}