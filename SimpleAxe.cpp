/*
* File:   SimpleAxe.cpp
* Author: Jonathan Stevens <jms15af@my.fsu.edu>
*
*/
#include "SimpleAxe.h"

double SimpleAxe::hit(double armor)
{
    if (armor > 0 && armor < 20)
        armor = 0;
    double damage = 60 - armor;
    if (damage < 0)
        return 0;
    return damage;
}
