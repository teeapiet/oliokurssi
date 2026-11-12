#include "Car.h"

#include <iostream>
#include <vector>

int main()
{
    std::vector<Car> carList;    // luodaan vektori johon tallennetaan car-olioita

    carList.push_back(Car("Volvo", "S90", 2018));
    carList.push_back(Car("Toyota", "Hilux", 1999));         //push_back lisää auton listan loppuun
    carList.push_back(Car("Mercedes-Benz", "C200", 2015));

    std::cout << "LISTAN TOINEN AUTO\n";
    carList[1].printData();

    std::cout << "\nKAIKKI AUTOT\n";

    for (const Car& car : carList)
    {
        car.printData();
        std::cout << '\n';
    }

    return 0;
}
