#include <iostream>
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
    Student() {
        this->Name = "";
        this->ExamGrade = 0;
        this->MathGrade = 0;
        this->BiggestGrade = 0;
        this->BaccalaureateAverage = 0;
        this->Mode = 0;
    }

    Student(string Name, float ExamGrade, float MathGrade, float BiggestGrade, float BaccalaureateAverage, int Mode) {
        this->Name = move(Name);
        this->ExamGrade = ExamGrade;
        this->MathGrade = MathGrade;
        this->BiggestGrade = BiggestGrade;
        this->BaccalaureateAverage = BaccalaureateAverage;
        this->Mode = Mode;
    }

    void SetName(string GivenName) {
        Name = move(GivenName);
    }
    string GetName() {
        return Name;
    }

    void SetExamGrade(float GivenGrade) {
        ExamGrade = GivenGrade;
    }
    float GetExamGrade() {
        return ExamGrade;
    }

    void SetMathGrade(float GivenGrade) {
        MathGrade = GivenGrade;
    }
    float GetMathGrade() {
        return MathGrade;
    }

    void SetBiggestGrade(float GivenGrade) {
        BiggestGrade = GivenGrade;
    }
    float GetBiggestGrade() {
        return BiggestGrade;
    }

    void SetBaccalaureateAverage(float GivenGrade) {
        BaccalaureateAverage = GivenGrade;
    }
    float GetBaccalaureateAverage() {
        return BaccalaureateAverage;
    }

    void SetMode(int GivenMode) {
        Mode = GivenMode;
    }
    float GetMode() {
        return Mode;
    }

    float CalculateCollegeAverage() const {
        if (Mode == 1)
            return (float)(0.8 * ExamGrade + 0.2 * BaccalaureateAverage);
        else
            return (float)(0.6 * ExamGrade + 0.2 * BiggestGrade + 0.2 * BaccalaureateAverage);
    }
};

int main() {

    return 0;
}
