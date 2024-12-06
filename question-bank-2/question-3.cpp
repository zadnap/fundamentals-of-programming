#include <iostream>
#include <vector>
using namespace std;

void descending_sort(vector<int> &array);

int main()
{
    int m, n;
    cin >> m >> n;

    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int x;
    cin >> x;
    vector<int> column_x;
    for (int i = 0; i < m; i++)
        column_x.push_back(matrix[i][x]);

    descending_sort(column_x);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (j == x ? column_x[i] : matrix[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
}

void descending_sort(vector<int> &array)
{
    int size = array.size();
    for (int i = 0; i < size; i++)
    {
        int max_index = i;
        for (int j = i; j < size; j++)
        {
            if (array[max_index] < array[j])
                max_index = j;
        }

        swap(array[max_index], array[i]);
    }
}