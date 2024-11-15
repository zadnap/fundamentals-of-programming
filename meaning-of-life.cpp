#include <iostream>
using namespace std;

int main()
{
    
    int n, count = 0, number;

    cin >> n;

    while (count < n){
        count++;
        cin >> number;
        if (number == 42) {
            cout << "I've found the meaning of life!" << endl;
            return 0;
        }
    }

    cout << "It's a joke!" << endl;

    return 0;
}

