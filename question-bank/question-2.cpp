#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double celcius_to_farenheit(double celcius_degree);

int main()
{
    double celcius_degree;

    cin >> celcius_degree;

    double farenheit_degree = celcius_to_farenheit(celcius_degree);

    cout << fixed << setprecision(2) << farenheit_degree << endl;

    return 0;
}

double celcius_to_farenheit(double celcius_degree)
{
    return celcius_degree * 9 / 5 + 32;
}