#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.14;

struct cylinder
{
    int radius, high;
};

double getSurfaceArea(const cylinder &c)
{
    return 2 * PI * pow(c.radius, 2) + 2 * PI * c.radius * c.high;
}

double getVolume(const cylinder &c)
{
    return PI * pow(c.radius, 2) * c.high;
}

int main()
{
    cylinder c;
    cin >> c.radius >> c.high;

    cout << fixed << setprecision(2) << getSurfaceArea(c) << " " << getVolume(c);
}
