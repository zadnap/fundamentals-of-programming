#include <iostream>
#include <cstring>
using namespace std;

void trim_right(char *s);

int main()
{
    return 0;
}

void trim_right(char *s)
{
    int len = strlen(s);
    while (s[len - 1] == ' ')
    {
        s[len - 1] = '\0';
        len = strlen(s);
    }
}