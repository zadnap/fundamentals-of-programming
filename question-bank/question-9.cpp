#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int nums[3] = {a, b, c};

    for (int i = 0; i < 3; i++)
    {
        if (nums[i + 1] < nums[i])
        {
            int temp = nums[i + 1];
            nums[i + 1] = nums[i];
            nums[i] = temp;
        }
    }

    for (int i = 2; i >= 0; i--)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
