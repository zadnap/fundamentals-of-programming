#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<double> array(n);
    for (int i = 0; i < n; i++)
        cin >> array[i];

    for (int i = n - 1; i >= 0; i--)
        cout << fixed << setprecision(2) << array[i] << " ";

    return 0;
}
