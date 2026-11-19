#include "Dog.h"

#include <iostream>

Dog::~Dog()
{
    //tuhoaja suoritetaan, animal tuhoaja suoritetaan automaattisesti tämän jälkeen
}

void Dog::callOut()
{
    std::cout << "Koira haukkuu!" << std::endl;
}
