#include <iostream>
#include <cstring>
using namespace std;

void delete_char(char *S, char c);

int main()
{
    return 0;
}

void delete_char(char *S, char c)
{
    int len = strlen(S);
    int i = 0;
    while (i < len)
    {
        if (S[i] == c)
        {
            for (int j = i; j < len; j++)
            {
                S[j] = S[j + 1];
            }
            len--;
        }
        else
        {
            i++;
        }
    }
}