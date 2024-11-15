#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

double compute_attendance_grade(int classes_attended, vector<double> practice_grades);
double compute_final_practice_grade(vector<double> practice_grades);
double compute_final_midterm_grade(vector<double> midterm_grades);
double roundToHalf(double num);
double roundToTenth(double num);

int main()
{
    int classes_attended;
    vector<double> practice_grades(10);
    vector<double> midterm_grades(2);
    double endterms_grade, creativity_grade;
    double final_grade;

    cin >> classes_attended;
    for (double &grade : practice_grades)
    {
        cin >> grade;
    }
    for (double &grade : midterm_grades)
    {
        cin >> grade;
    }
    cin >> endterms_grade >> creativity_grade;

    int attendance_grade = compute_attendance_grade(classes_attended, practice_grades);

    if (attendance_grade < 20)
    {
        final_grade = 0;
    }
    else
    {
        double final_practice_grade = compute_final_practice_grade(practice_grades);
        double final_midterm_grade = compute_final_midterm_grade(midterm_grades);

        final_grade = roundToTenth(
            0.2 * roundToHalf(final_practice_grade) +
            0.2 * roundToHalf(final_midterm_grade) +
            0.6 * (roundToHalf(creativity_grade) + roundToHalf(endterms_grade)));
    }

    cout << fixed << setprecision(1) << (final_grade > 10 ? 10 : final_grade);

    return 0;
}

double compute_attendance_grade(int classes_attended, vector<double> practice_grades)
{
    int practice_done_count = 0;

    for (double grade : practice_grades)
    {
        if (grade != 0)
            practice_done_count++;
    }

    return classes_attended + practice_done_count;
}

double compute_final_practice_grade(vector<double> practice_grades)
{
    sort(practice_grades.begin(), practice_grades.end(), greater<double>());

    double sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += practice_grades[i];
    }

    return sum / 5;
}

double compute_final_midterm_grade(vector<double> midterm_grades)
{
    return (midterm_grades[0] + midterm_grades[1]) / 2;
}

double roundToHalf(double num)
{
    return round(num * 2) / 2.0;
}

double roundToTenth(double num)
{
    return round(num * 10) / 10.0;
}
