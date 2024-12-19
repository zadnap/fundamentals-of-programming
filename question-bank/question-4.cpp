#include <iostream>
#include <iomanip>
using namespace std;

struct Student
{
    string name;
    double gpa;

    Student(string _name)
    {
        name = _name;
    }

    Student(string _name, double _gpa)
    {
        name = _name;
        gpa = _gpa;
    }

    string grade()
    {
        if (gpa >= 3.6)
            return "xuat sac";
        if (gpa >= 3.2 && gpa < 3.6)
            return "gioi";
        if (gpa >= 2.5 && gpa < 3.2)
            return "kha";
        return "khong du dieu kien";
    }

    void print()
    {
        cout << name << " " << fixed << setprecision(1) << gpa << " " << grade() << endl;
    }
};

Student get(int n)
{
    string name;
    double gpa = 0;

    for (int i = 0; i < n; i++)
    {
        string newName;
        double newGpa;
        cin >> newName >> newGpa;

        if (newGpa > gpa)
        {
            name = newName;
            gpa = newGpa;
        }
    }

    return Student(name, gpa);
}

int main()
{
    get(3).print();
    return 0;
}