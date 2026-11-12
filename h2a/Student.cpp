#include "Student.h"

void Student::setName(std::string name)    //tallentaa uuden arvon olion tietoihin
{
    this->name = name;
}

void Student::setStudentNumber(int studentNumber)
{
    this->studentNumber = studentNumber;
}

void Student::setAverage(double average)
{
    this->average = average;
}

std::string Student::getName() const    //palauttaa olion tiedoissa olevan arvon
{
    return name;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

double Student::getAverage() const
{
    return average;
}
