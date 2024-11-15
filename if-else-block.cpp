#include <iostream>

using namespace std;

int main()
{
    char input_char;
    cin >> input_char;

    if (input_char <= 122 && input_char >= 97)
    {
        input_char = input_char - 32;
    }

    cout << input_char;
}