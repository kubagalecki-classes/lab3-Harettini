#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{ if(towar==0)    return 0;
unsigned int z=1, w=0, pom;
Stocznia stocznia{};
Statek* s;
 while (1)
 {s = stocznia();
   pom = s->transportuj();
   w = w + pom;
    if((bool)dynamic_cast<Zaglowiec*>(s))z = z + 1;
    delete s;
    if(w >= towar)    return z;
 }
}