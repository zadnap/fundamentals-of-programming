#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> permutation(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> permutation[i];
    }

    if (next_permutation(permutation.begin(), permutation.end()))
    {
        for (int num : permutation)
        {
            cout << num << " ";
        }
    }
    else
    {
        sort(permutation.begin(), permutation.end());
        for (int num : permutation)
        {
            cout << num << " ";
        }
    }

    return 0;
}