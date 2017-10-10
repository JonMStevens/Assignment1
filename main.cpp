
/* 
 * File:   main.cpp
 * Author: Javier <jrescobara@gmail.com> 
 *
 * Created on September 25, 2017, 3:19 PM
 */

#include <cstdlib>
#include <iostream>
#include "Weapon.h"
#include "WeaponFactory.h"
#include "time.h"
using namespace std;

/**
 * Simulates the behavior of a weapon in the presence and absence of armor, by 
 * printing its damage on standard output. 
 * @param weapon Weapon to simulate
 * @param armor Armor points
 */
void simulateWeapon(Weapon * weapon, double armor) {
    cout << weapon->getName() << " inflicts " << weapon->hit() << " when armor is 0" << std::endl;
    cout << weapon->getName() << " inflicts " << weapon->hit(armor) << " when armor is " << armor << std::endl << std::endl;
}

/*
 * 
 */
int main(int argc, char** argv) {
    /* rand() has to be seeded only once.
     * Just did it in main because it only runs once and other things can run multiple times.
     * Found on http://www.math.uaa.alaska.edu/~afkjm/csce211/handouts/RandomFunctions.pdf */
    srand(time(NULL)); 
    double armor = 20;

    Weapon *weapon = WeaponFactory::getInstance()->getWeapon("sword");
    simulateWeapon(weapon, armor);
    delete(weapon);

    weapon = WeaponFactory::getInstance()->getWeapon("spear");
    simulateWeapon(weapon, armor);
    delete(weapon);

    weapon = WeaponFactory::getInstance()->getWeapon("axe");
    simulateWeapon(weapon, armor);
    delete(weapon);

    weapon = WeaponFactory::getInstance()->getWeapon("crsword");
    simulateWeapon(weapon, armor);
    delete(weapon);

    weapon = WeaponFactory::getInstance()->getWeapon("hammer");
    simulateWeapon(weapon, armor);
    delete(weapon);

    return 0;
}

