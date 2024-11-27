#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count = 0;
    string s, t;
    cin >> s;
    cin >> t;

    for (long unsigned int i = 0; i < s.length(); i++)
    {
        if (s[i] == t[i])
            count++;
    }

    cout << count << endl;

    return 0;
}