#include <iostream>
#include <vector>
using namespace std;

string get_last_survivor(vector<string> players, int start, int step);

int main()
{
    int n, k;
    cin >> n >> k;
    cin.ignore();

    vector<string> players(n);
    for (int i = 0; i < n; i++)
        getline(cin, players[i]);

    cout << get_last_survivor(players, 0, k);

    return 0;
}

string get_last_survivor(vector<string> players, int start, int step)
{
    int player_remained = players.size();
    if (player_remained == 1)
        return players[0];

    int executed_postition = (start + step) % player_remained;

    players.erase(players.begin() + executed_postition);

    return get_last_survivor(players, executed_postition, step);
}