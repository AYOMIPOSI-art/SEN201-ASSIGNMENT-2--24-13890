#include <iostream>
using namespace std;

int main() {
    string name;
    int subjects;
    int score;
    int total = 0;
    float average;
    char grade;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Number of Subjects: ";
    cin >> subjects;

    for (int i = 1; i <= subjects; i++) {
        cout << "Enter score for subject " << i << ": ";
        cin >> score;
        total += score;
    }

    average = (float) total / subjects;

    if (average >= 70)
        grade = 'A';
    else if (average >= 60)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else if (average >= 45)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n--- STUDENT RESULT ---" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Total Score: " << total << endl;
    cout << "Average Score: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
