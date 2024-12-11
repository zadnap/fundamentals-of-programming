#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void normalize(double *out, int *in, int n);

int main()
{
    int n;
    cin >> n;

    int n_dimension_vector[n];
    for (int i = 0; i < n; i++)
        cin >> n_dimension_vector[i];

    double normalized_vector[n];

    normalize(normalized_vector, n_dimension_vector, n);

    for (int i = 0; i < n; i++)
        cout << fixed << setprecision(3) << normalized_vector[i] << " ";

    return 0;
}

void normalize(double *out, int *in, int n)
{
    for (int i = 0; i < n; i++)
    {
        out[i] = (double)in[i] / 255;
    }
}