#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    double delta = pow(b, 2) - 4 * a * c;

    if (a == 0 && b == 0 && c == 0)
    {
        cout << "phuong trinh co vo so nghiem" << endl;
    }
    else if (a == 0 && b == 0)
    {
        cout << "phuong trinh vo nghiem" << endl;
    }
    else if (a == 0 && b != 0)
    {
        double only_solution = (double)-c / b;

        cout << "phuong trinh co 1 nghiem" << endl;
        cout << fixed << setprecision(5) << only_solution << endl;
    }
    else
    {
        if (delta < 0)
        {
            cout << "phuong trinh vo nghiem" << endl;
        }
        else if (delta == 0)
        {
            double only_solution = (double)-b / (2 * a);

            cout << "phuong trinh co 1 nghiem" << endl;
            cout << fixed << setprecision(5) << only_solution << endl;
        }
        else if (delta > 0)
        {
            double first_solution = (double)(-b - sqrt(delta)) / (2 * a);
            double second_solution = (double)(-b + sqrt(delta)) / (2 * a);

            cout << "phuong trinh co 2 nghiem" << endl;
            cout << fixed << setprecision(5) << first_solution << " " << second_solution << endl;
        }
    }

    return 0;
}