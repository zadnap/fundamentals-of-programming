#include <iostream>
#include <cstring>
using namespace std;

void pad_right(char *s, int n);

int main()
{
    char s[100];
    cin >> s;

    int n;
    cin >> n;

    pad_right(s, n);

    cout << s;

    return 0;
}

void pad_right(char *s, int n)
{
    int len = std::strlen(s);
    if (len < n)
    {
        for (int i = len; i < n; ++i)
        {
            s[i] = '_';
        }
        s[n] = '\0';
    }
}
