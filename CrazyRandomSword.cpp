
/*
 * File:   CrazyRandomSword.cpp
 * Author: Jackson Walsh <jjw14d@my.fsu.edu>
 *
 */

#include "CrazyRandomSword.h"

CrazyRandomSword::CrazyRandomSword() : Weapon ("Crazy Random Sword", 0.0){
    srand(time(0));
    hitPoints = ((int)rand() % 90) + 10;	
}

double CrazyRandomSword::hit(double armor){
    double damage = hitPoints - ((int)rand() % (int)(armor / 2));
    if(damage < 0){
        return 0;
    }
    return damage;
}





