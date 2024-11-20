#include <iostream>
#include <string>

using namespace std;

string pigLatin(string word);

int main()
{
    string word;

    cin >> word;

    cout << pigLatin(word);

    return 0;
}

string pigLatin(string word)
{
    string newWord;

    switch (word[0])
    {
    case 'u':
    case 'e':
    case 'o':
    case 'a':
    case 'i':
        newWord = word + "way";
        break;
    default:
        newWord = word.substr(1, word.length() - 1) + word.substr(0, 1) + "ay";
        break;
    }

    return newWord;
}