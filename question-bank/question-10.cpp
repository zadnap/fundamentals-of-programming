#include <iostream>
using namespace std;

int *getPointerToTen();

int main()
{
    cout << *getPointerToTen();
    return 0;
}

int *getPointerToTen()
{
    return new int(10);
}