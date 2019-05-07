#ifndef ENEMY_H
#define ENEMY_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include"SDL/SDL_ttf.h"
typedef struct enemyt
{
  SDL_Surface* perso;
  SDL_Rect pos;
}enemyt;
#endif
