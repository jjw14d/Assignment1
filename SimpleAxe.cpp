/*
 * File:   SimpleAxe.cpp
 * Author: Jackson Walsh <jjw14dmy.fsu.edu
 *
 */

#include "SimpleAxe.h"


double SimpleAxe::hit(double armor){
    double damage;

    if (armor > 0 && armor < 20)
	damage = 60;
    else
	damage = hitPoints - armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}
