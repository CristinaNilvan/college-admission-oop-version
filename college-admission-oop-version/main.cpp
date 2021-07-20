#include <iostream>
#include <string>
#include "student.h"

#define NUMBER_OF_STUDENTS 6
#define NUMBER_OF_POSITIONS 3

using namespace std;

void SetDetails(Student Students[], int &NumberOfValidatedStudents) {
    string Names[NUMBER_OF_STUDENTS] = {"Keira Richelle", "Amy Dolph", "Braith Constance", "Darryl Marisa",
                                        "Jessamine Colin", "Janine Abel"};
    float ExamGrades[NUMBER_OF_STUDENTS] = {9.8, 10, 7, 4, 9.2, 8.8};
    float MathGrades[NUMBER_OF_STUDENTS] = {9.55, 9.95, 8.2, 6, 10, 9};
    float BiggestGrades[NUMBER_OF_STUDENTS] = {9.7, 10, 8.5, 6, 10, 10};
    float BaccalaureateAverages[NUMBER_OF_STUDENTS] = {9.6, 9.85, 8.3, 6.7, 9.3, 9.5};
    int Modes[NUMBER_OF_STUDENTS] = {2, 1, 2, 2, 1, 2};

    for (int i = 0; i < NUMBER_OF_STUDENTS; ++i) {
        if (ExamGrades[i] >= 5) {
            Students[i].SetName(Names[i]);
            Students[i].SetExamGrade(ExamGrades[i]);
            Students[i].SetMathGrade(MathGrades[i]);
            Students[i].SetBiggestGrade(BiggestGrades[i]);
            Students[i].SetBaccalaureateAverage(BaccalaureateAverages[i]);
            Students[i].SetMode(Modes[i]);

            NumberOfValidatedStudents += 1;
        }
    }
}

void SwapStudents(Student &FirstStudent, Student &SecondStudent) {
    Student Auxiliary;

    Auxiliary = FirstStudent;
    FirstStudent = SecondStudent;
    SecondStudent = Auxiliary;
}

void SortStudents(Student Students[], int NumberOfValidatedStudents) {
    for (int i = 0; i < NumberOfValidatedStudents ; ++i) {
        for (int j = i + 1; j < NumberOfValidatedStudents; ++j) {
            if (Students[i].CalculateCollegeAverage() < Students[j].CalculateCollegeAverage())
                SwapStudents(Students[i], Students[j]);
            else
            if (Students[i].CalculateCollegeAverage() == Students[j].CalculateCollegeAverage()) {
                if (Students[i].GetMathGrade() < Students[j].GetMathGrade())
                    SwapStudents(Students[i], Students[j]);
            }
        }
    }
}

void GetAdmittedStudents(Student Students[], int NumberOfValidatedStudents) {
    for (int i = 0; i < NumberOfValidatedStudents; ++i) {
        cout << "Name : " << Students[i].GetName() << " || ";
        cout << "College average : " << Students[i].CalculateCollegeAverage() << endl;
    }
}

void DetermineAdmittedStudents(Student Students[], int NumberOfValidatedStudents) {
    if (NUMBER_OF_POSITIONS >= NumberOfValidatedStudents)
        GetAdmittedStudents(Students, NumberOfValidatedStudents);
    else
        GetAdmittedStudents(Students, NUMBER_OF_POSITIONS);
}

int main() {
    int NumberOfValidatedStudents = 0;
    Student Students[NUMBER_OF_STUDENTS];

    SetDetails(Students, NumberOfValidatedStudents);
    SortStudents(Students, NumberOfValidatedStudents);

    DetermineAdmittedStudents(Students, NumberOfValidatedStudents);

    return 0;
}
