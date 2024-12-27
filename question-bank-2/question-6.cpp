#include <iostream>
using namespace std;

int getGCD(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << getGCD(a, b) << endl;

    return 0;
}

int getGCD(int a, int b)
{
    if (b == 0)
        return a;
    return getGCD(b, a % b);
}