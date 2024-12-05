#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    vector<int> positions;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i] == 7)
            positions.push_back(i);
    }

    if (positions.size() == 0)
    {
        cout << "Not found";
    }
    else
    {
        int n = positions.size();
        for (int i = n - 1; i >= 0; i--)
            cout << positions[i] << " ";
    }

    return 0;
}