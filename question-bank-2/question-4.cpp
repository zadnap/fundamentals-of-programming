#include <iostream>
#include <vector>
using namespace std;

void ascending_sort(vector<int> &array);

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

    vector<int> row_x;
    for (int i = 0; i < n; i++)
        row_x.push_back(matrix[x][i]);

    ascending_sort(row_x);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (i == x ? row_x[j] : matrix[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
}

void ascending_sort(vector<int> &array)
{
    int size = array.size();
    for (int i = 0; i < size; i++)
    {
        int max_index = i;
        for (int j = i; j < size; j++)
        {
            if (array[max_index] > array[j])
                max_index = j;
        }

        swap(array[max_index], array[i]);
    }
}
