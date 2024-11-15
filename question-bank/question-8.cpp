#include <iostream>
using namespace std;

int main()
{
    const int BEFORE_17_PRICE = 2500;
    const int AFTER_17_PRICE = 3000;

    int start_time, end_time, number_of_devices, total_price = 0;

    cin >> start_time >> end_time >> number_of_devices;

    if (start_time > 17)
    {
        total_price += number_of_devices * (end_time - start_time) * AFTER_17_PRICE;
    }
    else if (end_time <= 17)
    {
        total_price += number_of_devices * (end_time - start_time) * BEFORE_17_PRICE;
    }
    else
    {
        int total_after_17 = (end_time - 17) * AFTER_17_PRICE;
        int total_before_17 = (17 - start_time) * BEFORE_17_PRICE;
        total_price = number_of_devices * (total_before_17 + total_after_17);
    }

    cout << total_price << endl;

    return 0;
}