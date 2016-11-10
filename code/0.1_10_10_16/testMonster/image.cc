#include "image.h"

bool
contientPoint(Coord point, SDL_Rect rect){
return point.x >= rect.x &&
    point.x <= rect.x + rect.w &&
    point.y >= rect.y &&
    point.y <= rect.y + rect.h;
}


SDL_Surface *
loadImage( string filename )
{
  //Temporary storage for the image that's loaded
  SDL_Surface* loadedImage = NULL;

  //The optimized image that will be used
  SDL_Surface* optimizedImage = NULL;
  //Load the image
  loadedImage = IMG_Load( filename.c_str() );
  //If nothing went wrong in loading the image
  if( loadedImage != NULL )
    {
      //Create an optimized image
      optimizedImage = SDL_DisplayFormat( loadedImage );

      //Free the old image
      SDL_FreeSurface( loadedImage );
    }
  //Return the optimized image
  return optimizedImage;
}


SDL_Surface *
loadImageWithColorKey(string filename, int r, int g, int b)
{
  //The image that's loaded
  SDL_Surface* loadedImage = NULL;

  //The optimized image that will be used
  SDL_Surface* optimizedImage = NULL;

  //Load the image
  loadedImage = IMG_Load( filename.c_str() );

  //If the image loaded
  if( loadedImage != NULL )
    {
      //Create an optimized image
      optimizedImage = SDL_DisplayFormat( loadedImage );

      //Free the old image
      SDL_FreeSurface( loadedImage );

      //If the image was optimized just fine
      if( optimizedImage != NULL )
        {
          //Map the color key
          Uint32 colorkey = SDL_MapRGB( optimizedImage->format, r, g, b );

          //Set all pixels of color R 0, G 0xFF, B 0xFF to be transparent
          SDL_SetColorKey( optimizedImage, SDL_SRCCOLORKEY, colorkey );
        }
    }
  //Return the optimized image
  return optimizedImage;
}


void apply_Surface(int x, int y, SDL_Surface* source,
                   SDL_Surface* destination, SDL_Rect* clip)
{
  SDL_Rect offset;
  offset.x = x;
  offset.y = y;
  SDL_BlitSurface( source, clip, destination, &offset );
}
