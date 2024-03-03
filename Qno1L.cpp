#include <iostream>
using namespace std;

#define MAX 10

class student {
private:
    char name[30];
    int courseNum;
    int total;
    float perc;

public:
    void getDetails(); // member function to get student's details
    void putDetails(); // member function to print student's details
};

void student::getDetails() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter course number: ";
    cin >> courseNum;
    cout << "Enter total marks out of 500: ";
    cin >> total;
    perc = (float)total / 500 * 100;
}

void student::putDetails() {
    cout << "Student details:\n";
    cout << "Name: " << name << ", Course Number: " << courseNum << ", Total: " << total << ", Percentage: " << perc << endl;
}

int main() {
    int numStudents;
    cout << "Enter total number of students: ";
    cin >> numStudents;

    student students[MAX];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details of student " << i + 1 << ":\n";
        students[i].getDetails();
    }

    for (int i = 0; i < numStudents; i++) {
        cout << "Details of student " << i + 1 << ":\n";
        students[i].putDetails();
    }

    return 0;
}
