#include <iostream>
using namespace std;

int subtractionRecursive(int n);

int main()
{
    int n;
    cin >> n;

    cout << subtractionRecursive(n);

    return 0;
}

int subtractionRecursive(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return 3 * subtractionRecursive(n - 1) - subtractionRecursive(n - 2);
}