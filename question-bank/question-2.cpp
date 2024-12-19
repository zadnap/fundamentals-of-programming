#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct triangle
{
    int edge1, edge2, edge3;
    triangle(int initEdge1, int initEdge2, int initEdge3)
    {
        edge1 = initEdge1;
        edge2 = initEdge2;
        edge3 = initEdge3;
    }

    bool isTriangle()
    {
        if (edge1 + edge2 <= edge3 || edge2 + edge3 <= edge1 || edge1 + edge3 <= edge2)
            return false;
        return true;
    }

    double getArea()
    {
        if (!isTriangle())
        {
            return -1;
        }

        double half_petrimeter = (edge1 + edge2 + edge3) / 2;
        double area = sqrt(half_petrimeter * (half_petrimeter - edge1) * (half_petrimeter - edge2) * (half_petrimeter - edge3));

        return area;
    }
};

int main()
{
    int edge1, edge2, edge3;
    cin >> edge1 >> edge2 >> edge3;

    triangle tri(edge1, edge2, edge3);
    double area = tri.getArea();

    if (area == -1)
        cout << "invalid" << endl;
    else
        cout << fixed << setprecision(2) << area << endl;

    return 0;
}
