#include <iostream>
#include <cmath>
using namespace std;

void cube(double *p);

int main()
{
    double n;
    cin >> n;

    cube(&n);

    cout << n;

    return 0;
}

void cube(double *p)
{
    *p = pow(*p, 3);
}