#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
#include <cstdlib>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include"level.h"
#include"image.h"
//... tous les includes nécessaires

//Constant

// Définitions des structures

enum EnumMonster {STANDARD,DORMEUR,DEAD};

struct Monster
{
    EnumMonster typeMonster;
    //...
};

//Définitions des prototypes de fonctions
void initMonster(Monster & m);
//....

//void showMonster(Level l);

#endif // MONSTER_H
