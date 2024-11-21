#include <iostream>

using namespace std;

void printArrow(int n, bool left);

int main()
{
    int n;
    bool left;
    cin >> n >> left;

    printArrow(n, left);
    return 0;
}

void printArrow(int n, bool left)
{
    bool is_reversed = false;
    int asterisk_in_line = n;
    int space_before = left ? n - 1 : 0;

    for (int i = 1; i < n * 2; i++)
    {
        int this_line_space_before_count = space_before;
        while (this_line_space_before_count > 0)
        {
            cout << " ";
            this_line_space_before_count--;
        }

        int this_line_asterisk_count = asterisk_in_line;
        while (this_line_asterisk_count > 0)
        {
            cout << "*";
            this_line_asterisk_count--;
        }

        if (asterisk_in_line == 1)
        {
            is_reversed = true;
        }

        if (is_reversed)
        {
            asterisk_in_line++;

            if (left)
                space_before += 1;
            else
                space_before -= 2;
        }
        else
        {
            asterisk_in_line--;

            if (left)
                space_before -= 1;
            else
                space_before += 2;
        }

        cout << endl;
    }
}