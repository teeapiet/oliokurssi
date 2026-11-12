#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
private:                              //olion tiedot
    std::string brand;
    std::string model;
    int yearModel = 0;

public:                              //näitä voidaan kutsua pääohjelmasta
    void printData() const;
    void setBrand(std::string brand);
    void setModel(std::string model);
    void setYearModel(int yearModel);
};

#endif
