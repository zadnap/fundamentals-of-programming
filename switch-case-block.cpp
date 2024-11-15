#include <iostream>

using namespace std;

string getZodiacSign(int day, int month);
int main()
{
    int day, month;
    cin >> day >> month;

    cout << getZodiacSign(day, month) << endl;
}

string getZodiacSign(int day, int month)
{
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
    {
        return "Bach Duong";
    }
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
    {
        return "Kim Nguu";
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
    {
        return "Song Tu";
    }
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
    {
        return "Cu Giai";
    }
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
    {
        return "Su Tu";
    }
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
    {
        return "Xu Nu";
    }
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
    {
        return "Thien Binh";
    }
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
    {
        return "Thien Yet";
    }
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
    {
        return "Nhan Ma";
    }
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
    {
        return "Ma Ket";
    }
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
    {
        return "Bao Binh";
    }
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
    {
        return "Song Ngu";
    }
    else
    {
        return "Ngay thang khong hop le";
    }
}