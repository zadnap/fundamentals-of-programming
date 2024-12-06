#include <iostream>
using namespace std;

int main()
{
    int number_of_employees;
    cin >> number_of_employees;

    int employee_information[number_of_employees][3];
    for (int i = 0; i < number_of_employees; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> employee_information[i][j];
        }
    }

    int employee_matched_conditions = 0;
    for (int i = 0; i < number_of_employees; i++)
    {
        if (employee_information[i][0] == 0 &&
            employee_information[i][1] > 30 &&
            employee_information[i][2] == 1)
            employee_matched_conditions++;
    }

    cout << employee_matched_conditions;

    return 0;
}