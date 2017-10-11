
/*
 * File:   CrazyRandomSword.cpp
 * Author: Jackson Walsh <jjw14d@my.fsu.edu>
 *
 */

#include "CrazyRandomSword.h"

CrazyRandomSword::CrazyRandomSword(){
    hitPoints = (rand() % 90) + 10;	
}

double CrazyRandomSword::hit(double armor){
    double damage = hitPoints - (rand() % (armor / 2));
    if(damage < 0){
        return 0;
    }
    return damage;
}





