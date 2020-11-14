#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{ if(towar==0)    return 0;
unsigned int zagle=0, wyslane=0, pom;
Stocznia stocznia{};
Statek* s;
 while (1)
 {s = stocznia();
   pom=s->transportuj();
   wyslane=wyslane+pom;
    if((bool)dynamic_cast<Zaglowiec*>(s))zagle++;
    delete s;
    if(wyslane>=towar)    return zagle;
 }
}