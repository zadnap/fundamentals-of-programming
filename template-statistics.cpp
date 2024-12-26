template <class T>
void printStatistics(T a[], int n)
{
    T max = a[0];
    T min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    cout << max << " " << min << endl;
}