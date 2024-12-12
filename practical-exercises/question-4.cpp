#include <iostream>
using namespace std;

bool *isHigher(int *arr, int num, int thres);

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    int thres;
    cin >> thres;

    bool *result = isHigher(array, n, thres);

    for (int i = 0; i < n; i++)
        cout << result[i] << " ";

    return 0;
}

bool *isHigher(int *arr, int num, int thres)
{
    bool *result = new bool[num];

    for (int i = 0; i < num; i++)
    {
        if (arr[i] >= thres)
            result[i] = true;
        else
            result[i] = false;
    }

    return result;
}