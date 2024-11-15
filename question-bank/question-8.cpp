#include <iostream>
using namespace std;

int main()
{
    string n;
    char biggest_digit;

    cin >> n;

    for (char c : n)
    {
        if (c > biggest_digit)
            biggest_digit = c;
    }

    cout << biggest_digit;

    return 0;
}