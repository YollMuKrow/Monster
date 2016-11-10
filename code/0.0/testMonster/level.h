#ifndef LEVEL_H
#define LEVEL_H
#include <iostream>
#include <array>
#include "monster.h"
using namespace std;


const int NB_MAX_MONSTER = 45;

struct Level
{
    array<Monster,NB_MAX_MONSTER> tabMonster;
    int nbMonster;

    //... et tout plein de choses
};

//Définition des prototypes de fonctions
void initLevel(Level & lvl);

#endif // LEVEL_H
