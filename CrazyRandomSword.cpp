/*
* File:   CrazyRandomSword.cpp
* Author: Jonathan Stevens <jms15af@my.fsu.edu>
* Created October 9, 2017
*/
#include "CrazyRandomSword.h"


/**
* hitpoints = random integer number between 10
* and 100. Ignores a random amount of integer armor points, ranging from to 0 to
* half of the armor the weapon hits.
*/

double min(double a, double b)
{
    if (a < b)
        return a;

    return b;
}

double CrazyRandomSword::hit(double armor)
{
    armor = armor - (rand() % ((int)(min(hitPoints, armor)) / 2));

    double damage = hitPoints - armor;

    if (damage < 0)
    {
        return 0;
    }
    return damage;
}