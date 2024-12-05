#include <iostream>
#include <string>
using namespace std;

void to_lowercase(const string &str);

int main()
{
    pair<string, string> answers[4];
    for (int i = 0; i < 4; i++)
    {
        to_lowercase(answers[i].first);
        getline(cin, answers[i].first);
    }

    answers[0].second = 'A';
    answers[1].second = 'B';
    answers[2].second = 'C';
    answers[3].second = 'D';

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (answers[j + 1].first < answers[j].first)
                swap(answers[j + 1], answers[j]);
        }
    }

    for (int i = 0; i < 4; i++)
        cout << answers[i].second << " ";

    return 0;
}

void to_lowercase(const string &str)
{
    string result = str;
    for (char &c : result)
    {
        if (c <= 'Z' && c >= 'A')
        {
            c = c + ('a' - 'A');
        }
    }
}