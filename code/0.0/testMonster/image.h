#ifndef IMAGE_H
#define IMAGE_H
#include <SDL/SDL.h>
#include <string>
#include<SDL/SDL_image.h>

using namespace std;

struct Coord{ // POur stocker les coordonnées de la souris
  int x;
  int y;
};

bool // Permet de renvoyer un bolleen qui dit si le points est dans le rectangle ou pas
contientPoint(Coord point, SDL_Rect rect);


SDL_Surface *loadImage( string filename );

SDL_Surface *loadImageWithColorKey(string filename, int r, int g, int b);

void apply_Surface(int x, int y, SDL_Surface* source,
                   SDL_Surface* destination, SDL_Rect* clip);

#endif // IMAGE_H
