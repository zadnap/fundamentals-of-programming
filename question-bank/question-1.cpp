#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;

    cin >> x;

    if (sqrt(x) == floor(sqrt(x)) && x % 5 == 1 && x % 3 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
