#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    int marks[3];
    int total;
    float average;
    char grade;
};

char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}

void inputStudents(Student s[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> ws;
        getline(cin, s[i].name);

        s[i].total = 0;
        for (int j = 0; j < 3; ++j) {
            do {
                cout << "Enter mark " << j + 1 << " (0-100): ";
                cin >> s[i].marks[j];
                if (s[i].marks[j] < 0 || s[i].marks[j] > 100) {
                    cout << "Marks must be between 0 and 100.\n";
                }
            } while (s[i].marks[j] < 0 || s[i].marks[j] > 100);
            s[i].total += s[i].marks[j];
        }

        s[i].average = static_cast<float>(s[i].total) / 3;
        s[i].grade = calculateGrade(s[i].average);
    }
}

void displayTable(Student s[], int n) {
    cout << "\n" << left << setw(20) << "Name"
         << setw(10) << "Mark 1" << setw(10) << "Mark 2"
         << setw(10) << "Mark 3" << setw(10) << "Total"
         << setw(10) << "Average" << "Grade\n";
    cout << string(80, '-') << '\n';

    for (int i = 0; i < n; ++i) {
        cout << left << setw(20) << s[i].name
             << setw(10) << s[i].marks[0] << setw(10) << s[i].marks[1]
             << setw(10) << s[i].marks[2] << setw(10) << s[i].total
             << setw(10) << fixed << setprecision(2) << s[i].average
             << s[i].grade << '\n';
    }
}

int findTopper(Student s[], int n) {
    int topper = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i].total > s[topper].total) {
            topper = i;
        }
    }
    return topper;
}

float classAverage(Student s[], int n) {
    int totalMarks = 0;
    for (int i = 0; i < n; ++i) {
        totalMarks += s[i].total;
    }
    return static_cast<float>(totalMarks) / (n * 3);
}

int main() {
    Student s[50];
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    if (n < 1 || n > 50) {
        cout << "Number of students must be between 1 and 50.\n";
        return 1;
    }

    inputStudents(s, n);
    displayTable(s, n);

    int topper = findTopper(s, n);
    cout << "\nTopper: " << s[topper].name << " (" << s[topper].total << ")\n";
    cout << "Class average: " << fixed << setprecision(2) << classAverage(s, n) << "\n";

    return 0;
}