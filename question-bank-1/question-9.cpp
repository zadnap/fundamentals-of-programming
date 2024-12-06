#include <iostream>
#include <vector>
using namespace std;

bool is_symmetric(vector<int> &array);

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++)
        cin >> array[i];

    cout << (is_symmetric(array) ? "Symmetric array." : "Asymmetric array.");

    return 0;
}

bool is_symmetric(vector<int> &array)
{
    int size = array.size();
    for (int i = 0; i < size / 2; i++)
    {
        if (array[i] != array[size - 1 - i])
            return false;
    }

    return true;
}