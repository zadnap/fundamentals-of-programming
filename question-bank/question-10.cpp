#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number_of_subjects;
    int count = 0;
    double sum = 0;

    cin >> number_of_subjects;

    while (count < number_of_subjects)
    {
        double subject_score;
        cin >> subject_score;

        sum += subject_score;
        count++;
    }

    cout << fixed << setprecision(2) << sum / number_of_subjects << endl;

    return 0;
}