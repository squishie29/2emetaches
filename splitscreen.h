#ifndef SPLITSCREEN_H
#define SPLITSCREEN_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include"SDL/SDL_ttf.h"
typedef struct controls
{
  SDLKey up;
  SDLKey down;
  SDLKey left;
  SDLKey right;
}controls;
typedef struct group
{
  int j1;
  int j2;
}group;
void split(group* x,controls set1,controls set2,SDL_Rect* poschar,SDL_Rect* posecran1,SDL_Rect* poschar2,SDL_Surface* ecran,SDL_Surface* background,SDL_Surface* char1,SDL_Surface* char2, SDL_Rect* poscam,SDL_Rect* poscam2);
#endif
