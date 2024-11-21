#include <iostream>
#include <string>

using namespace std;

bool isCollinear(int x1, int y1, int x2, int y2, int x3, int y3);

int main()
{
    int x1, x2, x3, y1, y2, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (isCollinear(x1, y1, x2, y2, x3, y3))
    {
        cout << "Collinear.";
    }
    else
    {
        cout << "Not collinear.";
    }

    return 0;
}

bool isCollinear(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    return area == 0;
}