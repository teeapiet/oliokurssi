#include "Car.h"
#include <iostream>

void Car::printData() const
{
    std::cout << "Merkki: " << brand << '\n';
    std::cout << "Malli: " << model << '\n';
    std::cout << "Valmistusvuosi: " << yearModel << '\n';
}

void Car::setBrand(std::string brand)    //tallennetaan parametrina saatu merkki olion jäsenmuuttujaan
{
    this->brand = brand;                 //olion muuttuja
}

void Car::setModel(std::string model)
{
    this->model = model;
}

void Car::setYearModel(int yearModel)
{
    this->yearModel = yearModel;
}
