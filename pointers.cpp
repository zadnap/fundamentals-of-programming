#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    if (n <= 0)
    {
        cout << "Số nguyên dương phải lớn hơn 0." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }

    cout << *arr << endl;

    delete[] arr;

    return 0;
}