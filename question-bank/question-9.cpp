#include <iostream>
using namespace std;

int main()
{
    const int BEFORE_12_WAGE = 6000;
    const int AFTER_12_WAGE = 7500;

    int start_time, end_time, total_wage = 0;

    cin >> start_time >> end_time;

    if (start_time > 12)
    {
        total_wage += (end_time - start_time) * AFTER_12_WAGE;
    }
    else if (end_time <= 12)
    {
        total_wage += (end_time - start_time) * BEFORE_12_WAGE;
    }
    else 
    {
        int before_12_total_wage = (12 - start_time) * BEFORE_12_WAGE;
        int after_12_total_wage = (end_time - 12) * AFTER_12_WAGE;

        total_wage = before_12_total_wage + after_12_total_wage;
    }

    cout << total_wage << endl;

    return 0;
}