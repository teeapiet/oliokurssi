#include "Animal.h"
#include "Dog.h"

#include <iostream>
#include <memory>

int main()
{
    {
        std::unique_ptr<Animal> animal = std::make_unique<Animal>(); // luodaan Animal-olio, jonka unique_ptr omistaa

        std::unique_ptr<Animal> dog = std::make_unique<Dog>(); // osoittimen tyyppi on Animal, mutta luotava olio on dog

        animal->callOut();// kutsutaan animalin metodia

        dog->callOut();  //kutsutaan dogin metodia

    return 0;
}
