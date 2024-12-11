#include <iostream>
using namespace std;

double *getPointerToPi();

int main()
{
    cout << *getPointerToPi() << endl;
    return 0;
}

double *getPointerToPi()
{
    double *piPtr = new double(3.14159);
    return piPtr;
}