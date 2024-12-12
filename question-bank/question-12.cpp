#include <iostream>
#include <vector>
using namespace std;

int *selfDividingNumbers(int left, int right, int *returnSize);
bool is_self_dividing(int number);
int *getDigits(int number, int &length);

int main()
{
    int left, right, returnSize = 0;
    cin >> left >> right;

    int *self_dividing_nums = selfDividingNumbers(left, right, &returnSize);
    for (int i = 0; i < returnSize; i++)
        cout << self_dividing_nums[i] << " ";

    delete[] self_dividing_nums;

    return 0;
}

int *selfDividingNumbers(int left, int right, int *returnSize)
{
    vector<int> self_dividing_vec;

    for (int number = left; number <= right; number++)
    {
        if (is_self_dividing(number))
        {
            self_dividing_vec.push_back(number);
        }
    }

    *returnSize = self_dividing_vec.size();
    int *self_dividing_array = new int[*returnSize];

    for (int i = 0; i < *returnSize; i++)
    {
        self_dividing_array[i] = self_dividing_vec[i];
    }

    return self_dividing_array;
}

bool is_self_dividing(int number)
{
    int length;
    int *digits = getDigits(number, length);

    for (int i = 0; i < length; i++)
    {
        if (digits[i] == 0 || number % digits[i] != 0)
        {
            return false;
            delete[] digits;
        }
    }

    delete[] digits;
    return true;
}

int *getDigits(int number, int &length)
{
    number = abs(number);

    length = 0;
    int temp = number;
    do
    {
        length++;
        temp /= 10;
    } while (temp > 0);

    int *digits = new int[length];

    for (int i = length - 1; i >= 0; i--)
    {
        digits[i] = number % 10;
        number /= 10;
    }

    return digits;
}