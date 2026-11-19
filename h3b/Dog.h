#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal //dog perii animal-luokan
{
public:
    ~Dog() override;

    void callOut() override;//korvaa Animal-luokan callOut-metodin koiran omalla versiolla
};
#endif
