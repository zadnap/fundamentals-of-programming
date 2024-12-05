#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<double> array(n + 1);
    for (int i = 0; i < n; i++)
        cin >> array[i];

    double k;
    int insert_index;
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (k < array[i])
        {
            insert_index = i;
            break;
        }
    }

    for (int i = n; i >= insert_index; i--)
    {
        array[i + 1] = array[i];
    }
    array[insert_index] = k;

    for (int i = 0; i < n + 1; i++)
    {
        cout << fixed << setprecision(2) << array[i] << " ";
    }

    return 0;
}