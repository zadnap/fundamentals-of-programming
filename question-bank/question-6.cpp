#include <iostream>
#include <string>
using namespace std;

string check_valid_date(string date);
bool check_leap_year(int year);

int main()
{
    string date;

    cin >> date;

    cout << check_valid_date(date) << endl;
}

string check_valid_date(string date)
{
    if (date.length() != 10)
        return "no";

    int day = stoi(date.substr(0, 2));
    int month = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6, 4));

    bool is_leap_year = check_leap_year(year);

    if (month > 12 || month < 1)
        return "no";

    switch (month)
    {
    case 2:
        if (is_leap_year && day != 29)
            return "no";
        if (!is_leap_year && day != 28)
            return "no";
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day > 31)
            return "no";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day > 30)
            return "no";
        break;
    default:
        break;
    }

    return "yes";
}

bool check_leap_year(int year)
{
    if (year % 100 == 0)
    {
        return year % 400 == 0;
    }
    else
    {
        return year % 4 == 0;
    }
}