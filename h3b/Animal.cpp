#include "Animal.h"

#include <iostream>

Animal::~Animal()
{
    //tuhoaja suoritetaan
}

void Animal::callOut()
{
    std::cout << "Elain aantelee." << std::endl;
}
