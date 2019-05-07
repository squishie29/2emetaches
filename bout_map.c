#include "SDL/SDL.h"
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_image.h>
#include"splitscreen.h"
#include <string.h>
#include "enemy.h"
#include "bout_map.h"
void bout(enemyt* enemy,SDL_Surface* ecran,SDL_Rect poschar,int a,int* realtime)
{
  int screen=(ecran->w)/2;
  //init
  if ((*realtime)==0)
  {
    (*realtime)=poschar.x;
  }


  if ((*realtime)>screen*2)
  {
    enemy->pos.y=150;
    //SDL_BlitSurface(enemy.perso,NULL,ecran,&enemy.pos);
  }

    (*realtime)++;
    //printf("%d\n",(*realtime));
}
