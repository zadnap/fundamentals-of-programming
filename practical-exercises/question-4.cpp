#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a % 7 == 0 && b % 7 == 0)
    {
        cout << boolalpha << true << endl;
    }
    else
    {
        cout << boolalpha << false << endl;
    }

    return 0;
}