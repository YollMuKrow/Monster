#include "monster.h"
using namespace std;

void initMonster(Monster & m)
{
    m.typeMonster=STANDARD;
    //......
}

/*void showMonster(Level l){
  SDL_Rect standard;
  standard.x=15;
  standard.y=148;
  standard.w=45;
  standard.h=45;
  SDL_Surface*sprite=loadImageWithColorKey("sprite.bmp",255,255,255);
  for(int i=0;i<l.nbMonster;i++){
      switch(l.tabMonster[i].m.typeMonster){
        case STANDARD:
          apply_Surface(0,0,sprite,screen,standard);
          SDL_FreeSurface(sprite);
          break;
        case DORMEUR:
          break;
        case DEAD:
          break;
        }
    }
}*/
