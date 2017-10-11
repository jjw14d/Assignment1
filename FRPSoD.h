/*
 * File:   CommonSword.h
 * Author: Jackson Walsh <jjw14d@my.fsu.edu>
 *
 * Created on October 11, 1:20pm
 */

#include <string>
#include "Weapon.h"

#ifndef DOOM_H
#define DOOM_H

/**
 * Defines the behavior of the Flaming Raging Poisoning Sword of Doom (hitpoint = 10,000, deals more damage to
armored targets.)
 */
class FlamingRagingPoisoningSwordOfDoom : public Weapon {
public:

    FlamingRagingPoisoningSwordOfDoom() : Weapon("Flaming Raging Poisoning Sword Of Doom", 10000.0) {
    }
    virtual ~FlamingRagingPoisoningSwordOfDoom() {};
    virtual double smash(double armor);

};

#endif /* DOOM_H */


