#include <iostream>
#include <vector>
#include <string>
using namespace std;

string selection_sort(string number_as_str);

int main()
{
    int n;
    cin >> n;

    vector<long long int> array(n);
    vector<string> string_array;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        string number_as_string = selection_sort(to_string(array[i]));
        string_array.push_back(number_as_string);
    }

    for (int i = 0; i < n; i++)
        cout << string_array[i] << endl;

    return 0;
}

string selection_sort(string number_as_str)
{
    int n = number_as_str.size();

    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (number_as_str[j] < number_as_str[min_index])
            {
                min_index = j;
            }
        }
        swap(number_as_str[i], number_as_str[min_index]);
    }

    return number_as_str;
}