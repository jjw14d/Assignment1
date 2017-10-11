/*
 * File:   CrazyRandomSword.h
 * Author: Javier <jjw14d@my.fsu.edu>
 *
 * Created on October 11, 2017, 11:51 AM
 */

#include <stdlib.h>
#include <time.h>
#include "Weapon.h"

#ifndef CRAZYRAND_H
#define CRAZYRAND_H

/**
 * Defines the behavior of the Crazy Random Sword (hitpoint = random, randomly ignores armor points)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword();
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);

};

#endif /* CRAZYRAND_H */



