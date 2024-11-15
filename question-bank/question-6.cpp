#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float weight;
    cin >> weight;

    cout
        << fixed << setprecision(2) << weight * 0.453592 << endl;

    return 0;
}