#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float total, passed;
    cin >> total >> passed;
    cout << fixed << setprecision(2) << passed / total << endl;
    return 0;
}
