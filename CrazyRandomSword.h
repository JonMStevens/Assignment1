/*
* File:   CrazyRandomSword.h
* Author: Jonathan Stevens <jms15af@my.fsu.edu>
*
* Created on October 9, 2017, 9:31 PM
*/

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
* Defines behavior of crazy random sword
* CrazyRandomSword (10 points): hitpoints = random integer number between 10
* and 100. Ignores a random amount of integer armor points, ranging from to 0 to
* half of the armor the weapon hits.
*/
class CrazyRandomSword : public Weapon
{
public:

    CrazyRandomSword() : Weapon("Crazy random sword", 0) 
    {
        hitPoints = (rand() % 100) + 10;
    }
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

