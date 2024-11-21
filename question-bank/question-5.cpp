#include <iostream>
#include <string>

using namespace std;

bool circle(string moves);

int main()
{
    string moves;

    cin >> moves;

    cout << circle(moves) << endl;

    return 0;
}

bool circle(string moves)
{
    pair<int, int> initial_position = {0, 0};
    pair<int, int> new_position = {0, 0};

    for (char step : moves)
    {
        switch (step)
        {
        case 'R':
            new_position.first++;
            break;
        case 'D':
            new_position.second--;
            break;
        case 'L':
            new_position.first--;
            break;
        case 'U':
            new_position.second++;
            break;
        default:
            break;
        }
    }

    return initial_position.first == new_position.first && initial_position.second == new_position.second;
}