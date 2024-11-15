#include <iostream>

using namespace std;

int getDayInWeek(int day, int month, int year);

int main()
{
    int day, month, year;

    cin >> day >> month >> year;

    cout << getDayInWeek(day, month, year) << endl;

    return 0;
}

int getDayInWeek(int day, int month, int year)
{
    int y0 = year - (14 - month) / 12;
    int x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    int m0 = month + 12 * ((14 - month) / 12) - 2;
    int d0 = (day + x + 31 * m0 / 12) % 7;

    return d0;
}