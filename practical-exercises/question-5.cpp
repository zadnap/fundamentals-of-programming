#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a1, b1, c1, a2, b2, a3;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> a3;

    double average = (a1 + b1 + c1 + a2 * 2 + b2 * 2 + a3 * 3) / 10;

    cout << fixed << setprecision(2) << average << endl;

    return 0;
}