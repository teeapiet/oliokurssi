#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
    virtual ~Animal(); //mahdollistaa dog-olion turvallisen tuhoamisen animal-osoittimen kautta
    virtual void callOut();  //aliluokka voi tehdä tästä metodista oman versionsa
};
#endif
