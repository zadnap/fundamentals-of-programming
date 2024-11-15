#include <iostream>

using namespace std;

int main()
{
    double gpa;

    cin >> gpa;

    if (gpa >= 3.6)
    {
        cout << "Xuat sac" << endl;
    }
    else if (gpa < 3.6 && gpa >= 3.2)
    {
        cout << "Gioi" << endl;
    }
    else if (gpa >= 2.5 && gpa < 3.2)
    {
        cout << "Kha" << endl;
    }
    else if (gpa < 2.5 && gpa >= 2.0)
    {
        cout << "Trung binh" << endl;
    }
    else if (gpa < 2.0)
    {
        cout << "Khong ra duoc truong" << endl;
    }

    return 0;
}