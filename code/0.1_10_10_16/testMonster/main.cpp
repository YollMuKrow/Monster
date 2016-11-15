#include"image.h"
#include "level.h"

const int SCREEN_WIDTH=320; // longueur de l'écran
const int SCREEN_HEIGHT=568; // largeur de l'écran
const int SCREEN_BPP=32; // BPP de l'écran


int main(){
  bool quit=false;

  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_Surface *screen;
  screen=SDL_SetVideoMode(SCREEN_WIDTH,SCREEN_HEIGHT,
                          SCREEN_BPP,SDL_SWSURFACE);
  SDL_Event event;
  SDL_Surface*titre=loadImage("background.bmp");
  Level l;
  initLevel(l);

  apply_Surface(0,0,titre,screen,NULL);
  SDL_Flip(screen);

  while(!quit){

      afficherBoard(l);
      remplirBoard(l);
      afficherBoard(l);
      showMonsterLvl(l,screen);
      SDL_Flip(screen);

      while(SDL_PollEvent(&event))
        if(event.type==SDL_QUIT)
          quit=true;
    }
  SDL_FreeSurface(titre);
  SDL_FreeSurface(screen);
  SDL_Quit();
  return EXIT_SUCCESS;
}
