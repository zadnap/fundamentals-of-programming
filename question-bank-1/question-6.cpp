#include <iostream>
#include <string>
using namespace std;

int hammingDistance(int x, int y);
string convertToBinary(int number);
string leffPadBinaryNumber(string binaryNumber, long unsigned int expectedLength);

int main()
{
    int x, y;
    cin >> x >> y;

    cout << hammingDistance(x, y);

    return 0;
}

int hammingDistance(int x, int y)
{
    string x_binary = convertToBinary(x);
    string y_binary = convertToBinary(y);
    long unsigned int equal_length = x_binary.length() > y_binary.length() ? x_binary.length() : y_binary.length();

    x_binary = leffPadBinaryNumber(x_binary, equal_length);
    y_binary = leffPadBinaryNumber(y_binary, equal_length);

    int distance = 0;
    for (long unsigned int i = 0; i < equal_length; i++)
    {
        if (x_binary[i] != y_binary[i])
            distance++;
    }

    return distance;
}

string convertToBinary(int number)
{
    string binaryNumber = "";

    while (number != 0)
    {
        binaryNumber = to_string(number % 2) + binaryNumber;
        number = number / 2;
    }

    return binaryNumber;
}

string leffPadBinaryNumber(string binaryNumber, long unsigned int expectedLength)
{
    string paddedNumber = binaryNumber;

    while (paddedNumber.length() < expectedLength)
    {
        paddedNumber = '0' + paddedNumber;
    }

    return paddedNumber;
}