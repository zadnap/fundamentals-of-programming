#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++)
        cin >> array[i];

    sort(array.begin(), array.end());

    auto it = unique(array.begin(), array.end());

    int unique_count = distance(array.begin(), it);

    cout << unique_count << endl;

    return 0;
}