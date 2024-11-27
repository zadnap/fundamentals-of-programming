#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int m, n;

    cin >> m >> n;

    double sum_matrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            double matrix_element;
            cin >> matrix_element;
            sum_matrix[i][j] = matrix_element;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            double matrix_element;
            cin >> matrix_element;
            sum_matrix[i][j] += matrix_element;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << fixed << setprecision(2) << sum_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
