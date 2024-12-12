#include <iostream>
#include <cstring>
using namespace std;

void trim_left(char *s);

int main()
{

    return 0;
}

void trim_left(char *s)
{
    int len = strlen(s);
    while (s[0] == ' ')
    {
        for (int i = 0; i < len; i++)
        {
            s[i] = s[i + 1];
        }
        len = strlen(s);
    }
}