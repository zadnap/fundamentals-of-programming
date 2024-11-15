#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, h;
    cin >> a;
    cin >> b;
    cin >> h;

    float volumn = a * b * h;
    float rounded = round(volumn * 100.0) / 100.0;

    cout << rounded << endl;

    return 0;
}