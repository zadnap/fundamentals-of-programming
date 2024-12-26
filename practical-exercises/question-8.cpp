#include <iostream>
#include <vector>
using namespace std;

int findLHS(int arr[], int n);
int *selection_sort(int arr[], int n);
vector<pair<int, int>> get_frequency(int arr[], int n);

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    cout << findLHS(array, n) << endl;

    return 0;
}

int findLHS(int arr[], int n)
{
    int max_length = 0;
    vector<pair<int, int>> frequency = get_frequency(arr, n);

    for (long unsigned int i = 0; i < frequency.size() - 1; i++)
    {
        if (frequency[i + 1].first - frequency[i].first > 1)
            continue;

        if (frequency[i].second + frequency[i + 1].second > max_length)
            max_length = frequency[i].second + frequency[i + 1].second;
    }

    return max_length;
}

vector<pair<int, int>> get_frequency(int arr[], int n)
{
    int *sorted_arr = selection_sort(arr, n);
    vector<pair<int, int>> frequency;

    for (int i = 0; i < n; i++)
    {
        bool existed = false;
        int len_frequency = frequency.size();
        for (int j = 0; j < len_frequency; j++)
        {
            if (frequency[j].first == sorted_arr[i])
            {
                existed = true;
                break;
            }
        }

        if (!existed)
        {
            int fre = 0;

            for (int j = 0; j < n; j++)
            {
                if (sorted_arr[j] == sorted_arr[i])
                    fre++;
            }

            frequency.push_back({sorted_arr[i], fre});
        }
    }

    return frequency;
}

int *selection_sort(int arr[], int n)
{
    int *new_arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        swap(arr[i], arr[min_index]);
        new_arr[i] = arr[i];
    }

    return new_arr;
}