#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    std::string name;
    int studentNumber = 0;
    double average = 0.0;

public:
    void setName(std::string name);
    void setStudentNumber(int studentNumber);
    void setAverage(double average);

    std::string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};

#endif
