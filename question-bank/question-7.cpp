#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int a, b, c;
    c = 0;
    cin >> a >> b;

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    c = a;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    a = b;
    cout
        << "a = " << a << ", b = " << b << ", c = " << c << endl;

    b = c;
    cout
        << "a = " << a << ", b = " << b << ", c = " << c << endl;

    return 0;
}