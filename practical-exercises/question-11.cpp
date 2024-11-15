#include <iostream>
using namespace std;

int main()
{
    int day, month;

    cin >> day;
    cin >> month;

    if ((month == 3 && day >= 21) || (month > 3 && month < 6) || (month == 6 && day <= 21))
    {
        cout << "Spring" << endl;
    }
    else if ((month == 6 && day >= 22) || (month > 6 && month < 9) || (month == 9 && day <= 22))
    {
        cout << "Summer" << endl;
    }
    else if ((month == 9 && day >= 23) || (month > 9 && month < 12) || (month == 12 && day <= 21))
    {
        cout << "Autumn" << endl;
    }
    else
    {
        cout << "Winter" << endl;
    }

    return 0;
}
