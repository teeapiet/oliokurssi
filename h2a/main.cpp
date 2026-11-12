#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

#include <iostream>
#include <memory>

int main()
{
    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);

    std::cout << "AUTO\n";
    car.printData();         //olion metodia kutsutaan pisteellä

    Rectangle* rectangle = new Rectangle;  //luo olion kekomuistiin

    rectangle->setWidth(5.0);
    rectangle->setHeight(3.0);

    std::cout << "\nSUORAKULMIO\n";
    std::cout << "Pinta-ala: " << rectangle->getArea() << '\n';  //lasketaan tulostettavat arvot
    std::cout << "Ymparysmitta: " << rectangle->getCircum() << '\n';

    delete rectangle;    //tuhotaan new-komennolla luotu olio ja vapautetaan sen muisti
    rectangle = nullptr; //osoitin ei osoita enää mihinkään olioon

    std::unique_ptr<Student> student = std::make_unique<Student>();

    student->setName("Matti Meikalainen");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    std::cout << "\nOPISKELIJA\n";
    std::cout << "Nimi: " << student->getName() << '\n';
    std::cout << "Opiskelijanumero: "
              << student->getStudentNumber() << '\n';
    std::cout << "Keskiarvo: " << student->getAverage() << '\n';

    return 0;
}
