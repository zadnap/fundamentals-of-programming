#include <iostream>

using namespace std;

int main()
{
    int *pointer = new int;

    cin >> *pointer;

    cout << *pointer;
    return 0;
}