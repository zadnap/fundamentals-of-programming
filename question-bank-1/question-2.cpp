#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double product = 1;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double number;
        cin >> number;
        product *= number;
    }

    cout << fixed << setprecision(2) << product << endl;

    return 0;
}