/*
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *
 */

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleAxe.h"
#include "CrazyRandomSword.h"
#include "HeavyHammer.h"

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance()
{
    if (!instance)
    {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name)
{
    if (name.compare("sword") == 0)
    {
        return new CommonSword();
    }

    if (name.compare("spear") == 0)
    {
        return new CommonSpear();
    }

    /* Added by Jonathan Stevens <jms15af@my.fsu.edu */
    if (name.compare("axe") == 0) 
    {
        return new SimpleAxe();
    }
    /* Added by Jonathan Stevens <jms15af@my.fsu.edu */
    if (name.compare("crsword") == 0)
    {
        return new CrazyRandomSword();
    }
    /* Added by Jonathan Stevens <jms15af@my.fsu.edu */
    if (name.compare("hammer") == 0)
    {
        return new HeavyHammer();
    }

    throw "Invalid weapon";
}