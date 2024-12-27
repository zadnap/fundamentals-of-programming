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
    int empty_bed = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (flowerbed[i] == 0 && flowerbed[i + 1] == 0)
            {
                flowerbed[i] = 1;
                empty_bed++;
            }
        }
        if (i == n - 1)
        {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0)
            {
                flowerbed[i] = 1;
                empty_bed++;
            }
        }
        else
        {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)
            {
                flowerbed[i] = 1;
                empty_bed++;
            }
        }
    }

    return k <= empty_bed;
}