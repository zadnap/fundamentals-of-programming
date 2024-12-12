#include <iostream>
#include <cmath>
using namespace std;

double *getSquare(double number);

int main()
{
    return 0;
}

double *getSquare(double number)
{
    return new double(pow(number, 2));
}