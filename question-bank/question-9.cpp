#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> f = {1, 1};

    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        f[i] = 2 * f[i - 1] + f[i - 2] + 1;
    }

    cout << f[n] << endl;

    return 0;
}