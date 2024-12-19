#include <iostream>

using namespace std;

struct Time
{
    int hour, minute, second;
    Time(int initHour, int initMinute, int initSecond)
    {
        second = initSecond % 60;
        minute = initMinute % 60 + initSecond / 60;
        hour = initHour + initMinute / 60;
    }
};

int compare(int a, int b)
{
    if (a < b)
        return 1;
    if (a > b)
        return -1;
    return 0;
}

int checkArrivalTime(Time t1, Time t2)
{
    if (compare(t1.hour, t2.hour) != 0)
        return compare(t1.hour, t2.hour);
    if (compare(t1.minute, t2.minute) != 0)
        return compare(t1.minute, t2.minute);
    if (compare(t1.second, t2.second) != 0)
        return compare(t1.second, t2.second);
    return 0;
}

int main()
{
    int hour, minute, second;

    cin >> hour >> minute >> second;
    Time time1(hour, minute, second);

    cin >> hour >> minute >> second;
    Time time2(hour, minute, second);

    if (checkArrivalTime(time1, time2) == 1)
        cout << "1";
    else if (checkArrivalTime(time1, time2) == -1)
        cout << "2";
    else
        cout << "Equal";

    return 0;
}
