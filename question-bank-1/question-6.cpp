#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void descending_sort(vector<double> &array);

int main()
{
    int n;
    cin >> n;

    vector<double> scores(n);
    for (int i = 0; i < n; i++)
        cin >> scores[i];

    descending_sort(scores);

    for (int i = 0; i < n; i++)
        cout << fixed << setprecision(2) << scores[i] << " ";

    return 0;
}

void descending_sort(vector<double> &array)
{
    int n = array.size();
    for (int i = 0; i < n; i++)
    {
        int max_index = i;
        for (int j = i; j < n; j++)
        {
            if (array[j] > array[max_index])
                max_index = j;
        }

        swap(array[max_index], array[i]);
    }
}