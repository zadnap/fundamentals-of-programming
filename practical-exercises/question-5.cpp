#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << boolalpha << true << endl;
    }
    else
    {
        cout << boolalpha << false << endl;
    }

    return 0;
}