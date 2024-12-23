#include <iostream>
using namespace std;

int main()
{
    string string1;
    cin >> string1;

    string string2;
    cin >> string2;

    if (string1 == "good")
        cout << string1 + '-' + string2;
    else
        cout << string1 + ' ' + string2;

    return 0;
}