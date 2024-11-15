#include <iostream>
#include <cmath>
using namespace std;

bool is_triangle(int a, int b, int c);
bool is_right_triangle(int a, int b, int c);
bool is_isosceles_triangle(int a, int b, int c);
bool is_equilateral_triangle(int a, int b, int c);

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if (!is_triangle(a, b, c))
        cout << "khong phai tam giac" << endl;
    else
    {
        if (is_equilateral_triangle(a, b, c))
        {
            cout << "tam giac deu" << endl;
        }
        else if (is_right_triangle(a, b, c))
        {
            cout << "tam giac vuong" << endl;
        }
        else if (is_isosceles_triangle(a, b, c))
        {
            cout << "tam giac can" << endl;
        }
        else
        {
            cout << "tam giac thuong" << endl;
        }
    }

    return 0;
}

bool is_triangle(int a, int b, int c)
{
    return (a + b > c && a + c > b && b + c > a);
}

bool is_right_triangle(int a, int b, int c)
{
    return (
        pow(a, 2) + pow(b, 2) == pow(c, 2) ||
        pow(a, 2) + pow(c, 2) == pow(b, 2) ||
        pow(c, 2) + pow(b, 2) == pow(a, 2));
}

bool is_isosceles_triangle(int a, int b, int c)
{
    return (a == b || a == c || b == c);
}

bool is_equilateral_triangle(int a, int b, int c)
{
    return (a == b && a == c);
}
