#include <iostream>
using namespace std;

struct rectangle
{
    int length, high;
};

/// Ham tinh Chu vi của một hình chữ nhật, hàm không làm thay đổi HCN ban đầu
int getPerimeter(const rectangle &rec)
{
    return (rec.high + rec.length) * 2;
}

/// Ham tinh dien tich của một hình chữ nhật, hàm không làm thay đổi HCN ban đầu
int getArea(const rectangle &rec)
{
    return rec.high * rec.length;
}

int main()
{
    rectangle rec;
    cin >> rec.length >> rec.high;

    cout << getPerimeter(rec) << " " << getArea(rec);
}