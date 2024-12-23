#include <iostream>
#include <vector>
using namespace std;

vector<int> get_frequency_sorted(int array[], int n);
vector<int> sort_by_frequency(vector<pair<int, int>> frequency);

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    vector<int> frequency = get_frequency_sorted(array, n);
    for (long unsigned int i = 0; i < frequency.size(); i++)
    {
        cout << frequency[i] << " ";
    }

    return 0;
}

vector<int> get_frequency_sorted(int array[], int n)
{
    vector<pair<int, int>> frequency;

    for (int i = 0; i < n; i++)
    {
        bool existed = false;
        int len_frequency = frequency.size();
        for (int j = 0; j < len_frequency; j++)
        {
            if (frequency[j].first == array[i])
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
                if (array[j] == array[i])
                    fre++;
            }

            frequency.push_back({array[i], fre});
        }
    }

    return sort_by_frequency(frequency);
}

vector<int> sort_by_frequency(vector<pair<int, int>> frequency)
{
    vector<int> sorted_frequency;
    int len = frequency.size();

    for (int i = 0; i < len; i++)
    {
        int max_index = i;

        for (int j = i + 1; j < len; j++)
        {
            if (frequency[j].second > frequency[max_index].second)
            {
                max_index = j;
            }
            else if (frequency[j].second == frequency[max_index].second &&
                     frequency[j].first > frequency[max_index].first)
            {
                max_index = j;
            }
        }

        swap(frequency[i], frequency[max_index]);
        sorted_frequency.push_back(frequency[i].first);
    }

    return sorted_frequency;
}