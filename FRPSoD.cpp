/*
 * File:   FRPSoD.cpp
 * Author: Jackson Walsh <jjw14d@my.fsu.edu>
 *
 */

#include "FRPSoD.h"


double FlamingRagingPoisoningSwordOfDoom::smash(double armor){
    double damage = hitPoints + armor;
    if(damage < 0){
        return 0;
    }
    return damage;
}



