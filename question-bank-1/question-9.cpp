#include <iostream>
#include <vector>

using namespace std;

int count_repetition(int number, vector<int> list);

int main()
{
    int n;

    cin >> n;

    vector<int> list(n);
    vector<pair<int, int>> frequency;

    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool already_processed = false;

        for (const pair<int, int> &fre : frequency)
        {
            if (fre.first == list[i])
            {
                already_processed = true;
                break;
            }
        }

        if (!already_processed)
        {
            frequency.push_back({list[i], count_repetition(list[i], list)});
        }
    }

    for (pair<int, int> &fre : frequency)
    {
        cout << fre.first << " " << fre.second << endl;
    }

    return 0;
}

int count_repetition(int number, vector<int> list)
{
    int count = 0;

    for (int item : list)
    {
        if (number == item)
            count++;
    }

    return count;
}