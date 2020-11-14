#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{int wyslane=0, zagle=0;
Stocznia stocznia{};
Statek* s;
 while (wysłane<towar)
 {s = stocznia();
 wyslane=wyslane+s->transportuj;
 if(dynamic_cast<Zaglowiec>(s))zagle++;
 delete s;
 }
 delete stocznia;
    return zagle;
}