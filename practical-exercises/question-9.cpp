#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int hammingDistance(int x, int y);

int main()
{
    int x, y;

    cin >> x >> y;

    cout << hammingDistance(x, y) << endl;

    return 0;
}

int hammingDistance(int x, int y)
{
    auto convert_to_binary = [](int number) -> string
    {
        string number_in_binary = "";

        while (number != 0)
        {
            int binary_digit = number % 2;
            number_in_binary += to_string(binary_digit);
            number = number / 2;
        }

        reverse(number_in_binary.begin(), number_in_binary.end());

        return number_in_binary.empty() ? "0" : number_in_binary;
    };

    int distance = 0;
    string x_in_binary = convert_to_binary(x);
    string y_in_binary = convert_to_binary(y);

    while (x_in_binary.length() < y_in_binary.length())
        x_in_binary = "0" + x_in_binary;
    while (y_in_binary.length() < x_in_binary.length())
        y_in_binary = "0" + y_in_binary;

    for (size_t i = 0; i < x_in_binary.length(); i++)
    {
        if (x_in_binary[i] != y_in_binary[i])
        {
            distance++;
        }
    }

    return distance;
}
