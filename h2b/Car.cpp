#include "Car.h"

#include <iostream>

Car::Car(std::string brand, std::string model, int yearModel)
{
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

void Car::printData() const
{
    std::cout << "Merkki: " << brand << '\n';
    std::cout << "Malli: " << model << '\n';
    std::cout << "Vuosimalli: " << yearModel << '\n';
}
