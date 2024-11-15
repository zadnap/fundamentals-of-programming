#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    double scores[6];

    for (int i = 0; i < 6; ++i)
    {
        cin >> scores[i];
    }

    double minScore = *min_element(scores, scores + 6);
    double maxScore = *max_element(scores, scores + 6);

    double total = 0.0;
    for (int i = 0; i < 6; ++i)
    {
        total += scores[i];
    }

    total -= (minScore + maxScore);

    double average = total / 4;

    cout << fixed << setprecision(1);
    cout << average << endl;

    return 0;
}
