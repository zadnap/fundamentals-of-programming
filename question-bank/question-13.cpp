#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (a == 0 && b != 0)
    {
        cout << "phuong trinh vo nghiem" << endl;
    }
    else if (a == 0 && b == 0)
    {
        cout << "phuong trinh co vo so nghiem" << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << (double)-b / a << endl;
    }

    return 0;
}