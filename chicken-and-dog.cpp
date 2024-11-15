#include <iostream>
using namespace std;

int main()
{
    int total_animals, total_legs;

    cin >> total_animals >> total_legs;

    int dog = total_legs / 2 - total_animals;
    int chicken = 2 * total_animals - total_legs / 2;

    if (dog < 0 || chicken < 0 || dog + chicken != total_animals || dog*4 + chicken*2 != total_legs) {
        cout << "invalid" << endl;
    }
    else 
    {
        cout << "chicken = " << chicken << ", " << "dog = " << dog << endl;
    }

    return 0;
}

