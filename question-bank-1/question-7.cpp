#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> evens;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        if (number % 2 == 0)
            evens.push_back(number);
    }

    for (int even : evens)
        cout << even << " ";

    return 0;
}