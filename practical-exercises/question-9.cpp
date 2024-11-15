#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> fibonacci = {0, 1};

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        if (i >= 2) 
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        cout << fibonacci[i] << " ";
    }

    return 0;
}

