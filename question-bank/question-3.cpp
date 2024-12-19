#include <iostream>
#include <iomanip>
using namespace std;

int get_gcd(int a, int b);
int get_lcm(int a, int b);

struct Fraction
{
    int a, b;
    Fraction()
    {
        a = 0;
        b = 0;
    }

    Fraction(int numerator, int denominator)
    {
        a = numerator;
        b = denominator;
    }

    double value()
    {
        if (b == 0)
            return -1;
        return (double)a / b;
    }

    void print()
    {
        int gcd = get_gcd(a, b);

        cout << a / gcd << '/' << b / gcd << endl;
    }
};

Fraction add(Fraction x, Fraction y);

int main()
{
    int inputA, inputB;
    cin >> inputA >> inputB;

    Fraction x;
    x.a = inputA;
    x.b = inputB;

    x.print();
    cout << fixed << setprecision(2) << x.value();

    return 0;
}

Fraction add(Fraction x, Fraction y)
{
    int lcm = get_lcm(x.b, y.b);
    int sum_numerator = x.a * (lcm / x.b) + y.a * (lcm / y.b);

    return Fraction(sum_numerator, lcm);
}

int get_lcm(int a, int b)
{
    return (a * b) / get_gcd(a, b);
}

int get_gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}