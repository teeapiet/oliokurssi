#include "ItalianChef.h"

#include <iostream>

ItalianChef::ItalianChef(std::string name) : Chef(name)  //Chef(name) kutsuu kantaluokan muodostinta ja antaa sille nimen, chef-muodostin suoritetaan ensin ja tallentaa nimen jäsenmuuttujaan
{
    std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
}

ItalianChef::~ItalianChef()
{
    std::cout << "ItalianChef " << name << " destruktori" << std::endl;
}

std::string ItalianChef::getName()  //palautetaan chef-luokalta peritty name jäsenmuuttuja
{
    return name;
}

void ItalianChef::makePasta()
{
    std::cout << "Italian Chef " << name << " makes pasta" << std::endl;
}
