#include "level.h" 

void initBoard(Level & lvl){

  for(int x=0;x<BOARD_X;x++){
      for(int y=0;y<BOARD_Y;y++){
          lvl.b[x][y]=0;
        }
    }
}

void initLevel(Level & lvl)
{
  //initialisation du nombre de monstres du niveau
  lvl.nbMonster = 3;
  initBoard(lvl);
  //initialisation des monstres de ce niveau
  for(int i=0;i<lvl.nbMonster;i++){
      initMonster( lvl.tabMonster[i]);
    }
}

void remplirBoard(Level & lvl){
  // Remplissage des Monsters
  for(int i=0;i<lvl.nbMonster;i++){
      switch(lvl.tabMonster[i].typeMonster){
        case STANDARD:
          lvl.b[lvl.tabMonster[i].x][lvl.tabMonster[i].y]=1;
          break;
        case DORMEUR:
          lvl.b[lvl.tabMonster[i].x][lvl.tabMonster[i].y]=2;
          break;
        }
    }
}

// JUSTE POUR DES TESTS (ne sera pas dans le projet final)
void afficherBoard(Level lvl){
  for(int x=0;x<BOARD_X;x++){
      for(int y=0;y<BOARD_Y;y++){
          cout << "board de" << x << " et " << y << " : " << lvl.b[x][y] << endl;;
        }
    }
}

void showMonsterLvl(Level l,SDL_Surface* &screen){

  for(int i=0;i<l.nbMonster;i++){
      SDL_Surface*sprite=loadImageWithColorKey("sprite.bmp",255,255,255);
      apply_Surface(DEBUT_X_BOARD+(LONGUEUR_CASE*l.tabMonster[i].x),DEBUT_Y_BOARD+(LARGEUR_CASE*l.tabMonster[i].y),sprite,screen,&l.tabMonster[i].rectMonster);
      SDL_FreeSurface(sprite);
    }
}
