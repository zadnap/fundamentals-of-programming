#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count = 2;
    vector<int> fibonacci = {1, 1};

    cin >> n;

    while (count < n) {
        fibonacci[count] = fibonacci[count - 1] + fibonacci[count - 2];
        count++;
    }

    cout << fibonacci[n - 1] << endl;

    return 0;
}

