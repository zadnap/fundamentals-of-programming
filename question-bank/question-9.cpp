#include <iostream>

using namespace std;

int getTriangleType(int a, int b, int c);

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    cout << getTriangleType(a, b, c);

    return 0;
}

int getTriangleType(int a, int b, int c)
{
    if (a + b > c && a + c > b && c + b > a)
    {
        if (a == b && b == c)
        {
            return 2;
        }
        else if (a == b || b == c || c == a)
        {
            return 1;
        }
        else
        {
            return 3;
        }
    }
    else
    {
        return 0;
    }
}