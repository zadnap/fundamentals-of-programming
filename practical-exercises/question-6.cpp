#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double weight, height;

    cin >> weight >> height;

    double body_mass_index = weight / pow(height, 2);

    cout << fixed << setprecision(2) << body_mass_index << endl;

    return 0;
}