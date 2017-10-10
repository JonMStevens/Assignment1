/*
* File:   HeavyHammer.h
* Author: Jonathan Stevens <jms15af@my.fsu.edu>
*
* Created on October 10, 2017
*/

#include <string>
#include "Weapon.h"

#ifndef HEAVYHAMMER_H
#define HEAVYHAMMER_H

/**
* Define behavior of heavy hammer. Deals 40 damage + damage equal to amount of armor.
*/
class HeavyHammer : public Weapon
{
public:

    HeavyHammer() : Weapon("Heavy Hammer", 40.0) { }
    virtual ~HeavyHammer() {};
    virtual double hit(double armor);

};

#endif /* HEAVYHAMMER_H */

