#include "SDL/SDL.h"
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_image.h>
#include"splitscreen.h"

void split(group* x,controls set1,controls set2,SDL_Rect* poschar,SDL_Rect* posecran1,SDL_Rect* poschar2,SDL_Surface* ecran,SDL_Surface* background,SDL_Surface* char1,SDL_Surface* char2, SDL_Rect* poscam,SDL_Rect* poscam2)
{
  posecran1=NULL;
  //SDLKey test;
  //test=SDLK_RIGHT;
  Uint8 *keystates = SDL_GetKeyState( NULL );
  if( keystates[ set1.right ] )
  {
    if((poschar->x+char1->w)<ecran->w/4)
    {
      poschar->x++;
      (*x).j1++;
    }
    else
    if(poscam->x<(background->w-ecran->w/2))
    {
      poscam->x+=10;
      (*x).j1+=10;
    }
    else (poscam->x=0);
  }
  if( keystates[ set1.left ] )
  {
    if((poschar->x+char1->w)>0)
    {
      poschar->x--;
      (*x).j1--;
    }
    else
    if(poscam->x<(background->w-ecran->w/2))
    {
      poscam->x-=10;
      (*x).j1-=10;
    }
    else (poscam->x=0);
  }
  //char 2
  if( keystates[ set2.right ] )
  {
    if((poschar2->x+char2->w)<(ecran->w/4)*3)
    {
      poschar2->x++;
      (*x).j2++;
    }
    else
    if (poscam2->x<(background->w-ecran->w/2))
    {
      poscam2->x+=10;
      (*x).j2+=10;
    }
    else (poscam2->x=500);
  }
  if( keystates[ set2.left ] )
  {
  if((poschar2->x+char2->w)>(ecran->w/2+char2->w))
    {
      poschar2->x--;
      (*x).j2--;
    }
    else
    if (poscam2->x<(background->w-ecran->w/2))
    {
      (*x).j2-=10;
      //poscam2->x-=10;
    }
    else (poscam2->x=500);
  }
}
