#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool is_prime(int number);
void ascending_sort(vector<int> &array);

int main()
{
    int n;
    cin >> n;

    vector<int> array(n);
    vector<int> primes;
    vector<int> prime_indexes;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (is_prime(array[i]))
        {
            primes.push_back(array[i]);
            prime_indexes.push_back(i);
        }
    }
    ascending_sort(primes);

    for (long unsigned int i = 0; i < prime_indexes.size(); i++)
    {
        array[prime_indexes[i]] = primes[i];
    }

    for (int element : array)
    {
        cout << element << " ";
    }

    return 0;
}

bool is_prime(int number)
{
    if (number <= 1)
        return false;
    for (int i = 2; i <= sqrt(number); i++)
        if (number % i == 0)
            return false;
    return true;
}

void ascending_sort(vector<int> &array)
{
    for (long unsigned int i = 0; i < array.size() - 1; i++)
    {
        int min_index = i;

        for (long unsigned int j = i + 1; j < array.size(); j++)
        {
            if (array[j] < array[min_index])
                min_index = j;
        }

        swap(array[min_index], array[i]);
    }
}