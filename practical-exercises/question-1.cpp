#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> array(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int x, y;
    cin >> x >> y;
    for (int i = n - 1; i >= y - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[y - 1] = x;

    for (int i = 0; i < n + 1; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}