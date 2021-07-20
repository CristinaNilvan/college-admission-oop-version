#include "student.h"

Student::Student() {
    this->Name = "";
    this->ExamGrade = 0;
    this->MathGrade = 0;
    this->BiggestGrade = 0;
    this->BaccalaureateAverage = 0;
    this->Mode = 0;
}

Student::Student(string Name, float ExamGrade, float MathGrade, float BiggestGrade, float BaccalaureateAverage, int Mode) {
    this->Name = move(Name);
    this->ExamGrade = ExamGrade;
    this->MathGrade = MathGrade;
    this->BiggestGrade = BiggestGrade;
    this->BaccalaureateAverage = BaccalaureateAverage;
    this->Mode = Mode;
}

void Student::SetName(string GivenName) {
    Name = move(GivenName);
}

string Student::GetName() {
    return Name;
}

void Student::SetExamGrade(float GivenGrade) {
    ExamGrade = GivenGrade;
}

float Student::GetExamGrade() {
    return ExamGrade;
}

void Student::SetMathGrade(float GivenGrade) {
    MathGrade = GivenGrade;
}

float Student::GetMathGrade() {
    return MathGrade;
}

void Student::SetBiggestGrade(float GivenGrade) {
    BiggestGrade = GivenGrade;
}

float Student::GetBiggestGrade() {
    return BiggestGrade;
}

void Student::SetBaccalaureateAverage(float GivenGrade) {
    BaccalaureateAverage = GivenGrade;
}

float Student::GetBaccalaureateAverage() {
    return BaccalaureateAverage;
}

void Student::SetMode(int GivenMode) {
    Mode = GivenMode;
}

float Student::GetMode() {
    return Mode;
}

float Student::CalculateCollegeAverage() const {
    if (Mode == 1)
        return (float)(0.8 * ExamGrade + 0.2 * BaccalaureateAverage);
    else
        return (float)(0.6 * ExamGrade + 0.2 * BiggestGrade + 0.2 * BaccalaureateAverage);
}