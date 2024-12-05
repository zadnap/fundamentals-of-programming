#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void bubble_sort(vector<int> &array);

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    bubble_sort(array);

    double median;
    if (n % 2 == 0)
        median = (double)(array[n / 2] + array[n / 2 - 1]) / 2;
    else
        median = array[n / 2];

    cout << fixed << setprecision(1) << median << endl;

    return 0;
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