#include <iostream>
#include <vector>
using namespace std;

vector<int> getCorrectResponse(vector<int> pin, vector<int> num);
vector<int> getDigits(unsigned int number);
void printDigits(vector<int> digits);

int main()
{
    unsigned int pin, num;
    cin >> pin >> num;

    vector<int> digitsOfPin = getDigits(pin);
    vector<int> digitsOfNum = getDigits(num);
    vector<int> correctResponse = getCorrectResponse(digitsOfPin, digitsOfNum);

    printDigits(correctResponse);

    return 0;
}

vector<int> getCorrectResponse(vector<int> pin, vector<int> num)
{
    vector<int> correctResponse;
    for (int pinDigit : pin)
        correctResponse.push_back(num[pinDigit]);

    return correctResponse;
}

vector<int> getDigits(unsigned int number)
{
    vector<int> digits;
    while (number > 0)
    {
        digits.insert(digits.begin(), number % 10);
        number = number / 10;
    }

    return digits;
}

void printDigits(vector<int> digits)
{
    for (int digit : digits)
        cout << digit;
}