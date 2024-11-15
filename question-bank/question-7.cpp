#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int second;

    cin >> second;

    double minute = (double)second / 60;

    cout << ceil(minute) << endl;

    return 0;
}
