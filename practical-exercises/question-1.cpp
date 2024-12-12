#include <iostream>
using namespace std;

double *getPointerToPi();

double PI = 3.14159;

int main()
{
    cout << *getPointerToPi() << endl;
    return 0;
}

double *getPointerToPi()
{
    double *piPtr = &PI;
    return piPtr;
}