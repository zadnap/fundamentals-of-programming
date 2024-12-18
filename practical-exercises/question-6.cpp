#include <iostream>
#include <cmath>

using namespace std;

string left_pad_zero(int numb, int expected_length)
{
    string padded_number = to_string(numb);
    int len = padded_number.length();
    while (len < expected_length)
    {
        padded_number = '0' + padded_number;
        len = padded_number.length();
    }

    return padded_number;
}

struct Time
{
    int hour, minute, second;
    Time(int initHour, int initMinute, int initSecond)
    {
        hour = initHour;
        minute = initMinute;
        second = initSecond;
    }
    void getTimeDifference(Time other)
    {
        int firstTime = hour * 3600 + minute * 60 + second;
        int otherTime = other.hour * 3600 + other.minute * 60 + other.second;

        int timeDiff = abs(otherTime - firstTime);
        int hourDiff = 0;
        int minuteDiff = 0;
        while (timeDiff > 3600)
        {
            timeDiff = timeDiff - 3600;
            hourDiff++;
        }
        while (timeDiff > 60)
        {
            timeDiff = timeDiff - 60;
            minuteDiff++;
        }
        int secondDiff = timeDiff;

        cout << left_pad_zero(hourDiff, 2) << ":" << left_pad_zero(minuteDiff, 2) << ":" << left_pad_zero(secondDiff, 2);
    }
};

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;

    Time time1(hour, minute, second);
    cin >> hour >> minute >> second;

    Time time2(hour, minute, second);
    time1.getTimeDifference(time2);

    return 0;
}
