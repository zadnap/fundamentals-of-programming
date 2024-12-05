#include <iostream>
#include <vector>
using namespace std;

bool is_positive(int number);
void bubble_sort(vector<pair<int, int>> &array, bool asc);

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    vector<pair<int, int>> positive;
    vector<pair<int, int>> negative;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (is_positive(array[i]))
            positive.push_back({array[i], i});
        else
            negative.push_back({array[i], i});
    }

    bubble_sort(positive, true);
    bubble_sort(negative, false);

    for (long unsigned int i = 0; i < positive.size(); i++)
        array[positive[i].second] = positive[i].first;
    for (long unsigned int i = 0; i < negative.size(); i++)
        array[negative[i].second] = negative[i].first;

    for (int element : array)
    {
        cout << element << " ";
    }
}

bool is_positive(int number)
{
    return number > 0;
}

void bubble_sort(vector<pair<int, int>> &array, bool asc)
{
    for (long unsigned int i = 0; i < array.size(); i++)
    {
        for (long unsigned int j = 0; j < array.size() - 1; j++)
        {
            if (asc)
            {
                if (array[j].first > array[j + 1].first)
                    swap(array[j].first, array[j + 1].first);
            }
            else
            {
                if (array[j].first < array[j + 1].first)
                    swap(array[j].first, array[j + 1].first);
            }
        }
    }
}