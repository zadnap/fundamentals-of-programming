#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool is_valid_date(string date);
bool is_leap_year(int year);

struct date
{
    int day, month, year;
};

date process_date(string input_date);

date getNextDay(const date &currentDate)
{
    if (currentDate.day == 31 && currentDate.month == 12)
        return {1, 1, currentDate.year + 1};

    switch (currentDate.month)
    {
    case 2:
        if (is_leap_year(currentDate.year))
        {
            if (currentDate.day == 29)
            {
                return {1, 3, currentDate.year};
            }
        }
        else
        {
            if (currentDate.day == 28)
            {
                return {1, 3, currentDate.year};
            }
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (currentDate.day == 30)
        {
            return {1, currentDate.month + 1, currentDate.year};
        }
        break;
    default:
        if (currentDate.day == 31)
        {
            return {1, currentDate.month + 1, currentDate.year};
        }
        break;
    }

    return {currentDate.day + 1, currentDate.month, currentDate.year};
}

int main()
{
    string input_date;
    cin >> input_date;

    if (!is_valid_date(input_date))
    {
        cout << "INVALID";
        return 1;
    }

    date processsed_date = process_date(input_date);
    date next_day_date = getNextDay(processsed_date);

    int day = next_day_date.day;
    int month = next_day_date.month;
    int year = next_day_date.year;
    string year_string = to_string(year);

    while (year_string.length() < 4)
    {
        year_string = '0' + year_string;
    }

    cout << setfill('0') << setw(2) << day << '/' << setw(2) << month << '/' << year_string;

    return 0;
}

bool is_valid_date(string date)
{
    if (date.length() != 10)
        return false;
    if (date[2] != '/' || date[5] != '/')
        return false;

    try
    {
        int day = stoi(date.substr(0, 2));
        int month = stoi(date.substr(3, 2));
        int year = stoi(date.substr(6, 4));

        if (day <= 0 || month <= 0 || year <= 0)
            return false;

        switch (month)
        {
        case 2:
            if (is_leap_year(year))
            {
                if (day > 29)
                    return false;
            }
            else
            {
                if (day > 28)
                    return false;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30)
                return false;
        default:
            if (day > 31)
                return false;
            break;
        }
    }
    catch (const invalid_argument &e)
    {
        return false;
    }

    return true;
}

bool is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    return false;
}

date process_date(string input_date)
{
    int day = stoi(input_date.substr(0, 2));
    int month = stoi(input_date.substr(3, 2));
    int year = stoi(input_date.substr(6, 4));

    return {day, month, year};
}