#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split_string(string str);
int count_word_contained(string word, vector<string> split);
bool is_same_word(string word, string w);

int main()
{
    string sentence, word;
    getline(cin, sentence);
    cin >> word;

    vector<string> splits = split_string(sentence);
    int count = count_word_contained(word, splits);

    cout << count;

    return 0;
}

vector<string> split_string(string str)
{
    vector<string> str_split;

    int start_index = 0;

    for (long unsigned int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            string word = "";
            for (long unsigned int j = start_index; j < i; j++)
            {
                word += str[j];
            }
            start_index = i + 1;
            str_split.push_back(word);
        }
        else if (i == str.size() - 1)
        {
            string word = "";
            for (long unsigned int j = start_index; j <= i; j++)
            {
                word += str[j];
            }
            str_split.push_back(word);
        }
    }

    return str_split;
}

int count_word_contained(string word, vector<string> split)
{
    int count = 0;
    for (string w : split)
    {
        if (is_same_word(word, w))
            count++;
    }

    return count;
}

bool is_same_word(string word, string w)
{
    for (long unsigned int i = 0; i < word.length(); i++)
    {
        if (word[i] != w[i])
            return false;
    }

    return true;
}