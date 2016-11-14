#include "level.h" 

void initBoard(board b){

  for(int x=0;x<BOARD_X;x++){
      for(int y=0;y<BOARD_Y;y++){
          b[x][y]=0;
        }
    }
}

// Fonctions
void initLevel(Level & lvl)
{
   //initialisation du nombre de monstres du niveau
   lvl.nbMonster = 3;

   initBoard(lvl.b);

   //initialisation des monstres de ce niveau
   for(int i=0;i<lvl.nbMonster;i++){
   initMonster( lvl.tabMonster[i]);
}
}


void showMonsterLvl(Level l,SDL_Surface* &screen){

    for(int i=0;i<l.nbMonster;i++){
        SDL_Surface*sprite=loadImageWithColorKey("sprite.bmp",255,255,255);
        apply_Surface(DEBUT_X_BOARD+(LONGUEUR_CASE*l.tabMonster[i].x),DEBUT_Y_BOARD+(LARGEUR_CASE*l.tabMonster[i].y),sprite,screen,&l.tabMonster[i].rectMonster);
        SDL_FreeSurface(sprite);
    }
}
