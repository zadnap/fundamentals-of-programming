#include <iostream>
using namespace std;

void print_checkerboard_line(int position);

int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
        cin >> array[i];

    for (int i = 0; i < 5; i++)
    {
        print_checkerboard_line(array[i]);
        cout << endl;
    }

    return 0;
}

void print_checkerboard_line(int position)
{
    for (int i = 0; i < 5; i++)
    {
        if (position == i)
            cout << "Q" << " ";
        else
            cout << "*" << " ";
    }
}