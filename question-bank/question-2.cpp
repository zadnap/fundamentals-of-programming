#include <iostream>
using namespace std;

int main() {
    int n, summand = 1, sum = 0;

    cin >> n;

    while (summand <= 2 * n + 1) {
        sum += summand; 
        summand += 2; 
    }

    cout << sum;

    return 0;
}