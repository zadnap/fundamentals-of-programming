#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int pos;
    cin >> pos;
    pos--;

    for (int i = pos; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
        cout << array[i] << " ";

    return 0;
}