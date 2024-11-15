#include <iostream>
using namespace std;

bool is_perfect_number(int n);

int main() 
{
    int n;

    cin >> n;

    if (n > 0 && is_perfect_number(n)) {
        cout << "yes" << endl;
    }   
    else 
    {
        cout << "no" << endl;
    }

    return 0;
}

bool is_perfect_number(int n) 
{
    int sum_of_divisors = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum_of_divisors += i;
    }   

    return sum_of_divisors == n;
}