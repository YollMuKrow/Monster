using namespace std;
#include "level.h"


// Fonctions
void initLevel(Level & lvl)
{
   //initialisation du nombre de monstres du niveau
   lvl.nbMonster = 3;

   //initialisation du premier monstre de ce niveau (il y en a plusieurs (lvl.nbMonster) à faire)
   initMonster( lvl.tabMonster[0]);
   initMonster( lvl.tabMonster[1]);
   initMonster( lvl.tabMonster[2]);
}
void showMonsterLvl(Level l){

    for(int i=0;i<l.nbMonster;i++){
        apply_Surface(0,0,l.tabMonster[i].imMonster,screen,l.tabMonster[i].rectMonster);
        SDL_FreeSurface(l.tabMonster[i].imMonster);
    }
}
