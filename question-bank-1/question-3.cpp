#include <iostream>
using namespace std;

bool canPlaceFlowers(int flowerbed[], int n, int k);

int main()
{
    int n, k;
    cin >> n >> k;

    int flowerbed[n];
    for (int i = 0; i < n; i++)
        cin >> flowerbed[i];

    cout << boolalpha << canPlaceFlowers(flowerbed, n, k);

    return 0;
}

bool canPlaceFlowers(int flowerbed[], int n, int k)
{
    int count_empty = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (flowerbed[i] == 0 && flowerbed[i + 1] == 0)
            {
                count_empty++;
                flowerbed[i] = 1;
            }
        }
        else if (i == n - 1)
        {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0)
            {
                count_empty++;
                flowerbed[i] = 1;
            }
        }
        else
        {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
            {
                count_empty++;
                flowerbed[i] = 1;
            }
        }
    }

    return k <= count_empty;
}