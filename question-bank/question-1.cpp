#include <iostream>
using namespace std;

int main() {
    int n, factor = 1;
    long long p = 1;

    cin >> n;

    while (factor <= 2 * n + 1) {
        p *= factor;
        factor += 2;
    }

    cout << p;

    return 0;
}
