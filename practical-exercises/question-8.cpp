#include <iostream>
using namespace std;

int main() 
{
    int n, count = 1, odd_number = 1;

    cin >> n;

    while (count <= n) {
        cout << odd_number << " ";
        odd_number += 2;
        count++;
    }

    return 0;
}
