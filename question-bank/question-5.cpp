#include <iostream>
using namespace std;

int main()
{
    char c;

    cin >> c;

    if (c <= 122 && c >= 97)
    {
        cout << "The upper case character corresponding to " << c << " is " << char(c - 32);
    }
    else if (c >= 65 && c <= 90)
    {
        cout << "The lower case character corresponding to " << c << " is " << char(c + 32);
    }
    else
    {
        cout << c << " is not a letter";
    }
}
