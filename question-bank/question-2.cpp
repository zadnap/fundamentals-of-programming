#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (a != 0 && b != 0 && a % b == 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
