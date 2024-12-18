#include <iostream>
#include <cmath>
using namespace std;

struct fraction
{
    int numerator, denominator;
    fraction(int _numerator, int _denominator)
    {
        numerator = _numerator;
        denominator = _denominator;
    }
};

int get_gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

fraction addconst(const fraction &a, const fraction &b)
{
    int numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    int denominator = a.denominator * b.denominator;

    int gcd = get_gcd(numerator, denominator);
    numerator = numerator / gcd;
    denominator = denominator / gcd;

    if (denominator < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }

    return fraction(numerator, denominator);
}

int main()
{
    int numerator1, denominator1;
    cin >> numerator1 >> denominator1;
    fraction frac1(numerator1, denominator1);

    int numerator2, denominator2;
    cin >> numerator2 >> denominator2;
    fraction frac2(numerator2, denominator2);

    fraction sum = addconst(frac1, frac2);
    cout << sum.numerator << '/' << sum.denominator;
}
