#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void convert_to_other_units(int fahrenheit_degree);
int main()
{
    int a, b, i;

    cin >> a >> b;
    i = a;

    while (i <= b)
    {
        convert_to_other_units(i);
        i++;
    }

    return 0;
}

void convert_to_other_units(int fahrenheit_degree)
{
    double celcius_degree = ((double)fahrenheit_degree - 32) * 5 / 9;
    double kelvin_degree = celcius_degree + 273.15;
    cout
        << fixed << setprecision(2) << fahrenheit_degree << " "
        << fixed << setprecision(2) << celcius_degree << " "
        << fixed << setprecision(2) << kelvin_degree << endl;
}