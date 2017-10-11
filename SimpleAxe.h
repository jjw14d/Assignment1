
/*
 * File:   SimpleAxe.h
 * Author: Jackson Walsh <jjw14d@my.fsu.edu>
 *
 * Created on October 11, 2017, 11:39 am
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEAXE_H
#define SIMPLEAXE_H

/**
 * Defines the behavior of a simple axe (hitpoint = 60, ignores armor less than 20).
 */
class SimpleAxe : public Weapon {
public:

    SimpleAxe() : Weapon("Simple Axe", 60.0) {
    }
    virtual ~SimpleAxe() {};
    virtual double hit(double armor);

};

#endif /* SIMPLEAXE_H */
