#include <iostream>
using namespace std;

struct Vector
{
    double x;
    double y;

    Vector(double _x, double _y)
    {
        x = _x;
        y = _y;
    }

    void printVector()
    {
        cout << x << " " << y << endl;
    }
};

Vector addVector(const Vector &v1, const Vector &v2)
{
    Vector sum(v1.x + v2.x, v1.y + v2.y);
    return sum;
}

int main()
{
    double x1, y1;
    cin >> x1 >> y1;
    Vector v1(x1, y1);

    double x2, y2;
    cin >> x2 >> y2;
    Vector v2(x2, y2);

    Vector sum = addVector(v1, v2);
    cout << sum.x << " " << sum.y;
}