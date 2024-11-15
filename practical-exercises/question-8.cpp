#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int x1 = 0, y1 = 0, x2, y2;

    cin >> x2 >> y2;

    double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    cout
        << fixed << setprecision(2) << distance << endl;

    return 0;
}