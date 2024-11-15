#include <iostream>
using namespace std;

int main()
{
    int speed_of_wind;

    cin >> speed_of_wind;

    if (speed_of_wind < 74)
    {
        cout << 0;
    }
    else if (speed_of_wind >= 74 && speed_of_wind <= 95)
    {
        cout << 1;
    }
    else if (speed_of_wind >= 96 && speed_of_wind <= 110)
    {
        cout << 2;
    }
    else if (speed_of_wind >= 111 && speed_of_wind <= 130)
    {
        cout << 3;
    }
    else if (speed_of_wind >= 131 && speed_of_wind <= 155)
    {
        cout << 4;
    }
    else
    {
        cout << 5;
    }

    return 0;
}
