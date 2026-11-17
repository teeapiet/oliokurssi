#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef
{
protected:
    std::string name;
public:
    Chef(std::string name);
    ~Chef();                 //suoritetaan chefin tuhoutuessa

    void makeSalad();
    void makeSoup();
};
#endif
