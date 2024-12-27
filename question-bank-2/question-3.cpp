#include <iostream>
using namespace std;

bool isEven(int n);
int intertwined(int n);

int main()
{
    int n;
    cin >> n;

    cout << intertwined(n);

    return 0;
}

int intertwined(int n)
{
    if (n == 1)
        return 1;
    return isEven(n) ? -n + intertwined(n - 1) : n + intertwined(n - 1);
}

bool isEven(int n)
{
    return n % 2 == 0;
}