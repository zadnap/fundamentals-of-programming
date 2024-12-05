#include <iostream>
#include <vector>
using namespace std;

pair<string, string> find_nemo(vector<string> guests);

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> guests(n);
    for (int i = 0; i < n; i++)
        getline(cin, guests[i]);

    pair<string, string> next_to_nemo = find_nemo(guests);
    cout << next_to_nemo.first << " and " << next_to_nemo.second;

    return 0;
}

pair<string, string> find_nemo(vector<string> guests)
{
    int n = guests.size();
    pair<string, string> next_to_nemo;

    for (int i = 0; i < n; i++)
    {
        if (guests[i] == "Nemo")
        {
            if (i == 0)
                next_to_nemo = {guests[n - 1], guests[1]};
            else if (i == n - 1)
                next_to_nemo = {guests[n - 2], guests[0]};
            else
                next_to_nemo = {guests[i - 1], guests[i + 1]};
        }
    }

    return next_to_nemo;
}