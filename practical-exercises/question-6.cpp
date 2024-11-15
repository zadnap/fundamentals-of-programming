#include <iostream>

using namespace std;

int main()
{
    double score;
    cin >> score;

    string score_in_letter = "";

    if (score < 4.0)
        score_in_letter = "F";
    else if (score >= 4.0 && score <= 4.9)
        score_in_letter = "D";
    else if (score >= 5.0 && score <= 5.4)
        score_in_letter = "D+";
    else if (score >= 5.5 && score <= 6.4)
        score_in_letter = "C";
    else if (score >= 6.5 && score <= 6.9)
        score_in_letter = "C+";
    else if (score >= 7.0 && score <= 7.9)
        score_in_letter = "B";
    else if (score >= 8.0 && score <= 8.4)
        score_in_letter = "B+";
    else if (score >= 8.5 && score <= 8.9)
        score_in_letter = "A";
    else if (score >= 9 && score <= 10)
        score_in_letter = "A+";

    cout << score_in_letter << endl;

    return 0;
}