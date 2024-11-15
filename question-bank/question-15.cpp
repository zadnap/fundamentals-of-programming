#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0)
    {
        cout << "phuong trinh co vo so nghiem" << endl;
    }
    else if (a == 0 && b == 0)
    {
        cout << "phuong trinh vo nghiem" << endl;
    }
    else if (a == 0)
    {
        if (-c / b < 0)
        {
            cout << "phuong trinh vo nghiem" << endl;
        }
        else if (-c / b == 0)
        {
            cout << "phuong trinh co 1 nghiem" << endl;
            cout << fixed << setprecision(5) << 0.0 << endl;
        }
        else
        {
            double first_solution = (double)-sqrt(-c / b);
            double second_solution = (double)sqrt(-c / b);

            cout << "phuong trinh co 2 nghiem" << endl;
            cout << fixed << setprecision(5) << first_solution << " " << second_solution << endl;
        }
    }
    else if (b == 0)
    {
        if (-c / a < 0)
        {
            cout << "phuong trinh vo nghiem" << endl;
        }
        else if (-c / a == 0)
        {
            cout << "phuong trinh co 1 nghiem" << endl;
            cout << fixed << setprecision(5) << 0.0 << endl;
        }
        else
        {
            double first_solution = (double)-sqrt(sqrt(-c / a));
            double second_solution = (double)sqrt(sqrt(-c / a));

            cout << "phuong trinh co 2 nghiem" << endl;
            cout << fixed << setprecision(5) << first_solution << " " << second_solution << endl;
        }
    }
    else
    {
        double delta = pow(b, 2) - 4 * a * c;
        if (delta < 0)
        {
            cout << "phuong trinh vo nghiem" << endl;
        }
        else if (delta == 0)
        {
            double solution_of_quadratic = (double)-b / (2 * a);
            if (solution_of_quadratic == 0)
            {
                cout << "phuong trinh co 1 nghiem" << endl;
                cout << fixed << setprecision(5) << 0.0 << endl;
            }
            else if (solution_of_quadratic < 0)
            {
                cout << "phuong trinh vo nghiem" << endl;
            }
            else
            {
                double first_solution = -sqrt(solution_of_quadratic);
                double second_solution = sqrt(solution_of_quadratic);

                cout << "phuong trinh co 2 nghiem" << endl;
                cout << fixed << setprecision(5) << first_solution << " " << second_solution << endl;
            }
        }
        else if (delta > 0)
        {
            double first_solution_of_quadratic = (double)(-b - sqrt(delta)) / (2 * a);
            double second_solution_of_quadratic = (double)(-b + sqrt(delta)) / (2 * a);

            vector<double> solutions = {
                sqrt(first_solution_of_quadratic),
                sqrt(second_solution_of_quadratic)};

            if (first_solution_of_quadratic != 0)
                solutions.push_back(-sqrt(first_solution_of_quadratic));
            if (second_solution_of_quadratic != 0)
                solutions.push_back(-sqrt(second_solution_of_quadratic));

            solutions.erase(
                remove_if(solutions.begin(), solutions.end(), [](double value)
                          { return isnan(value); }),
                solutions.end());
            sort(solutions.begin(), solutions.end());

            if (solutions.size() == 0)
            {
                cout << "phuong trinh vo nghiem" << endl;
            }
            else
            {
                cout << "phuong trinh co " << solutions.size() << " nghiem" << endl;
                for (double sol : solutions)
                {
                    cout << fixed << setprecision(5) << sol << " ";
                }
            }
        }
    }

    return 0;
}