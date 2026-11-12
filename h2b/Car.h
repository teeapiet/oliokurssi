#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    Car(std::string brand, std::string model, int yearModel);

    void printData() const;
};

#endif
