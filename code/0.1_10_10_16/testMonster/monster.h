#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
#include <cstdlib>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include"image.h"
//... tous les includes nécessaires

//Constant

// Définitions des structures

enum EnumMonster {STANDARD,DORMEUR,DEAD};

struct Monster
{
    EnumMonster typeMonster;
    int x;
    int y;
    SDL_Surface *imMonster;
    SDL_Rect rectMonster;

};

//Définitions des prototypes de fonctions
void initMonster(Monster & m);
//....



#endif // MONSTER_H
