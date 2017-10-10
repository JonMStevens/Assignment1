/*
* File:   CrazyRandomSword.h
* Author: Jonathan Stevens <jms15af@my.fsu.edu>
*
* Created on October 9, 2017, 9:31 PM
*/

#include <string>
#include "Weapon.h"
#include <time.h>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
* • CrazyRandomSword (10 points): hitpoints = random integer number between 10
and 100. Ignores a random amount of integer armor points, ranging from to 0 to
half of the armor the weapon hits.
*/
class CrazyRandomSword : public Weapon
{
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", 0) 
    {
        srand(time(NULL));
        hitPoints = (rand() % 100) + 10;
    }
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

