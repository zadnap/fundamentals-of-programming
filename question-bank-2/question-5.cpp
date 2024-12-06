#include <iostream>
using namespace std;

int main()
{
    int matrix_size;
    cin >> matrix_size;

    int matrix[matrix_size][matrix_size];
    for (int i = 0; i < matrix_size; i++)
    {
        for (int j = 0; j < matrix_size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int destination;
    cin >> destination;
    destination--;
    int start_from_destination = 0, head_to_destination = 0;

    for (int i = 0; i < matrix_size; i++)
    {
        if (matrix[destination][i] == 1)
            start_from_destination++;
    }
    for (int i = 0; i < matrix_size; i++)
    {
        if (matrix[i][destination] == 1)
            head_to_destination++;
    }

    cout << start_from_destination << " " << head_to_destination;

    return 0;
}