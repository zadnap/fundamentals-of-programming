#include <iostream>
#include <string>
using namespace std;

int reverse_number(int numb);
bool check_in_range(int numb);
bool check_valid_numb(int numb);

int main()
{
    int numb;
    cin >> numb;

    if (check_in_range(numb) && check_valid_numb(numb))
    {
        int reversed_numb = reverse_number(numb);
        int subtraction = numb - reversed_numb;
        int reversed_subtraction = reverse_number(subtraction);

        cout << subtraction + reversed_subtraction << endl;
    }
    else
    {
        cout << "invalid" << endl;
    }

    return 0;
}

int reverse_number(int numb)
{
    string numb_in_string = to_string(numb);

    string a = numb_in_string.substr(0, 1);
    string b = numb_in_string.substr(1, 1);
    string c = numb_in_string.substr(2, 1);

    return stoi(c + b + a);
}

bool check_in_range(int numb)
{
    return (numb <= 999 && numb >= 100);
}

bool check_valid_numb(int numb)
{
    string numb_in_string = to_string(numb);
    int a = stoi(numb_in_string.substr(0, 1));
    int c = stoi(numb_in_string.substr(2, 3));

    return a > c;
}
