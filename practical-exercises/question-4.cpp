#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int compute_frequency(double number, double list[], int size);

int main()
{
    int n;
    double average, variance, sum = 0;

    cin >> n;

    double list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
        sum += list[i];
    }

    average = (double)sum / n;

    for (int i = 0; i < n; i++)
    {
        variance += compute_frequency(list[i], list, n) * pow(list[i] - average, 2);
    }

    variance = variance / n;

    cout << fixed << setprecision(2) << average << " " << variance << endl;

    return 0;
}

int compute_frequency(double number, double list[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (number == list[i])
            count++;
    }

    return count;
}