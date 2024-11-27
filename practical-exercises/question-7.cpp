#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    int count_word = 0;

    getline(cin, sentence);

    for (char c : sentence)
    {
        if (c == ' ')
        {
            count_word++;
        }
    }

    count_word++;

    cout << count_word << (count_word == 1 ? " word" : " words") << endl;

    return 0;
}