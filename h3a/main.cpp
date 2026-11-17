#include "Chef.h"
#include "ItalianChef.h"

#include <iostream>

int main()
{
  {
        Chef chef("Gordon Ramsay"); //luodaan chef olio pinomuistiin

        chef.makeSalad();          //pisteen avulla kutsutaan tämän olion metodeja
        chef.makeSoup();
    }
    //kun lohko päättyy chef tuhoutuu ja ~Chef() suoritetaan

    std::cout << std::endl;

    {
        ItalianChef italianChef("Anthony Bourdain"); //ensin suoritetaan chef-muodostin, sitten italianChef-muodostin.

        italianChef.makeSalad();
        italianChef.makeSoup();
        italianChef.makePasta();

        std::cout << "name of the Italian Chef is "
                  << italianChef.getName() << std::endl;
    }

    return 0;
}
