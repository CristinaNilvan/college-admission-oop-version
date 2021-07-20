#ifndef COLLEGE_ADMISSION_OOP_VERSION_STUDENT_H
#define COLLEGE_ADMISSION_OOP_VERSION_STUDENT_H

#include <string>

using namespace std;

class Student {
private:
    string Name;
    float ExamGrade;
    float MathGrade;
    float BiggestGrade;
    float BaccalaureateAverage;
    int Mode;

public:
    Student();
    Student(string Name, float ExamGrade, float MathGrade, float BiggestGrade, float BaccalaureateAverage, int Mode);

    void SetName(string GivenName);
    string GetName();

    void SetExamGrade(float GivenGrade);
    float GetExamGrade();

    void SetMathGrade(float GivenGrade);
    float GetMathGrade();

    void SetBiggestGrade(float GivenGrade);
    float GetBiggestGrade();

    void SetBaccalaureateAverage(float GivenGrade);
    float GetBaccalaureateAverage();

    void SetMode(int GivenMode);
    float GetMode();

    float CalculateCollegeAverage() const;
};

#endif //COLLEGE_ADMISSION_OOP_VERSION_STUDENT_H
