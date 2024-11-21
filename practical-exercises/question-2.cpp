#include <iostream>

using namespace std;

int maxThree(int a, int b, int c);

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    cout << maxThree(a, b, c);

    return 0;
}

int maxThree(int a, int b, int c)
{
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}