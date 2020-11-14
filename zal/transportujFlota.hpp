#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{ 
unsigned int zagle=0, wyslane=0, pom;
Stocznia stocznia{};
Statek* s;
 while (wyslane<towar)
 {s = stocznia();
 pom=s.transportuj();
 wyslane=wyslane+pom;
 if(dynamic_cast<Zaglowiec*>(s))zagle++;
 delete s;
 }
    return zagle;
}