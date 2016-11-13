using namespace std;
#include "level.h"


// Fonctions
void initLevel(Level & lvl)
{
   //initialisation du nombre de monstres du niveau
   lvl.nbMonster = 3;

   //initialisation des monstres de ce niveau
   for(int i=0;i<lvl.nbMonster;i++){
   initMonster( lvl.tabMonster[i]);
}
}
void showMonsterLvl(Level l,SDL_Surface* &screen){

    for(int i=0;i<l.nbMonster;i++){
        SDL_Surface*sprite=loadImageWithColorKey("sprite.bmp",255,255,255);
        apply_Surface(0,0,sprite,screen,&l.tabMonster[i].rectMonster);
        SDL_FreeSurface(sprite);
    }
}
