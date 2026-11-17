#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef  //italianchef perii chef-luokan
{
public:
    ItalianChef(std::string name);
    ~ItalianChef();

    std::string getName();
    void makePasta();
};
#endif
