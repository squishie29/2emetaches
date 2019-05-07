/**
* @file bout_map.c
* @brief function ajout perso bout de map.
* @author Guesmi Rami
* @version 0.1
* @date Mai, 5 2018
*
* Test environnement for function ajout perso bout de map
*/
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
void bout(enemyt* enemy,SDL_Surface* ecran,SDL_Rect poschar,int a,group x)
{
  int screen=((ecran->w)/2)*12;
  //printf("screen= %d\n", screen);
  if ((x.j1==screen)||(x.j1>screen))
  {
    enemy->pos.y=150;
    enemy->pos.x-=10;
  }


  //
  //init
  /*if ((*realtime)==0)
  {
    (*realtime)=poschar.x;
  }


  if ((*realtime)>screen*2)
  {

    //SDL_BlitSurface(enemy.perso,NULL,ecran,&enemy.pos);
  }

    (*realtime)++;*/
    //printf("%d\n",(*realtime));
}
