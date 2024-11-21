#include <iostream>

using namespace std;

bool isIsomorphic(string a, string b);

int main()
{
    string a, b;

    cin >> a >> b;

    cout << isIsomorphic(a, b);

    return 0;
}

bool isIsomorphic(string a, string b)
{
    for (long unsigned int i = 0; i < a.length(); i++)
    {
        for (long unsigned int j = 0; j < a.length(); j++)
        {
            if (i == j)
            {
                continue;
            }
            if ((a[i] == a[j] && a[i] - b[i] != a[j] - b[j]) ||
                (b[i] == b[j] && b[i] - a[i] != b[j] - a[j]))
            {
                return false;
            }
        }
    }

    return true;
}