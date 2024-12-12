#include <iostream>
#include <cstring>
using namespace std;

void pad_left(char *s, int n);

int main()
{
    return 0;
}

void pad_left(char *s, int n)
{
    int length = strlen(s);
    if (length >= n)
        return;

    for (int i = length - 1; i >= 0; i--)
    {
        s[i + (n - length)] = s[i];
    }

    s[n] = '\0';

    for (int i = 0; i < n - length; i++)
    {
        s[i] = '_';
    }
}