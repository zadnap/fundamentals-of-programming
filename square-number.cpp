#include <iostream>
#include <cmath>

using namespace std;    

int main() {
    int a;

    cin >> a;

    if (floor(sqrt(a)) == sqrt(a)) {
        cout << "yes" << endl;
    }
    else 
    {
        cout << "no" << endl;
    }

    return 0;
}