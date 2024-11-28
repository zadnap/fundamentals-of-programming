#include <iostream>

using namespace std;

void swap(int x, int y, int list[]);

int main()
{
    int n, x, y;

    cin >> n;

    int list[n];

    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }

    cin >> x >> y;

    swap(x, y, list);

    for (int i = 0; i < n; i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}

void swap(int x, int y, int list[])
{
    int temp = list[x - 1];
    list[x - 1] = list[y - 1];
    list[y - 1] = temp;
}