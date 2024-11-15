#include <iostream>
using namespace std;

int compute_factorial(int n);

int main() 
{
    int n;

    cin >> n;

    cout << compute_factorial(n) << endl;

    return 0;
}

int compute_factorial(int n) 
{
    if (n == 1) {
        return 1;
    }
    return n * compute_factorial(n-1);
}