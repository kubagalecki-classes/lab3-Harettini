#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{ if(towar==0)    return 0;
unsigned int z=0, w=0, pom;
Stocznia stocznia{};
Statek* s;
 while (1)
 {s = stocznia();
   pom = s->transportuj();
   w = w + pom;
    if(dynamic_cast < Zaglowiec* > (s)) z++;
    if(w >= towar)    return z;
    
    delete s;
 }
}