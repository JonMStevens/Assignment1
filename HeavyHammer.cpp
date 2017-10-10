/*
* File:   HeavyHammer.cpp
* Author: Jonathan Stevens <jms15af@my.fsu.edu>
*
* Created on October 10, 2017
*/

#include "HeavyHammer.h"


double HeavyHammer::hit(double armor)
{
    double damage = hitPoints + armor;
    if (damage < 0)
    {
        return 0;
    }
    return damage;
}