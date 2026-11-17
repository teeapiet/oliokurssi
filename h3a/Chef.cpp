#include "Chef.h"

#include <iostream>

Chef::Chef(std::string name)  //chef:: kertoo että muodostin kuuluu chef luokkaan
{
    this->name = name;

    std::cout << "Chef " << name << " konstruktori" << std::endl; //chefin nimi tulostetaan ja tieto olion luomisesta
}

Chef::~Chef()  //tuhoaja
{
    std::cout << "Chef " << name << " destruktori" << std::endl;
}

void Chef::makeSalad()
{
    std::cout << "Chef " << name << " makes salad" << std::endl; //käytetään tämän chefin jäsenmuuttujaan tallennettua nimeä
}

void Chef::makeSoup()
{
    std::cout << "Chef " << name << " makes soup" << std::endl;
}
