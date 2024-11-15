#include <iostream>

using namespace std;

int main()
{
    char letter;

    cin >> letter;

    int ascii_case_offset = 32;
    char uppercase_letter = letter - ascii_case_offset;

    cout << uppercase_letter << endl;

    return 0;
}