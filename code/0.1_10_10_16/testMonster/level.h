#ifndef LEVEL_H
#define LEVEL_H
#include <iostream>
#include <array>
#include "monster.h"

const int DEBUT_X_BOARD=16;
const int DEBUT_Y_BOARD=34;
const int LARGEUR_CASE=52;
const int LONGUEUR_CASE=59;
const int BOARD_X=5;
const int BOARD_Y=9;

using namespace std;
using board=array<array<int,BOARD_X>,BOARD_Y>; // 0-> Vide   1->MonsterStandard   2->MonsterDormeur   3->Obstacle

const int NB_MAX_MONSTER = 45;

struct Level
{
    array<Monster,NB_MAX_MONSTER> tabMonster;
    board b;
    int nbMonster;

    //... et tout plein de choses
};


void initBoard(Level & lvl);

//Définition des prototypes de fonctions
void initLevel(Level & lvl);

void remplirBoard(Level &lvl);

// JUSTE POUR DES TESTS (ne sera pas dans le projet final)
void afficherBoard(Level lvl);

void showMonsterLvl(Level l, SDL_Surface *&screen);
#endif // LEVEL_H
