#include <iostream>
using namespace std;

int main()
{
    double x;

    cin >> x;

    if (x > 0 && x < 1)
    {
        cout << boolalpha << true << endl;
    }
    else
    {
        cout << boolalpha << false << endl;
    }

    return 0;
}
