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
int main(int argc, char *argv[])
{
int continuer=1;
group x;
x.j1=0;
x.j2=0;
int v=0;
 SDL_Surface *ecran = NULL, *background = NULL,*char1=NULL,*char2=NULL;
 SDL_Rect poscam,poscam2,test;
 SDL_Rect poschar,poschar2;
 SDL_Rect *posecran1=NULL;
 SDL_Event event;
 enemyt enemy;
 int realtime=0;
 //init de position au bout de map x5 size of screen
 int where =2;


 controls set1,set2;
 //int pos char 1 & 2
 poschar.x=0;
 poschar.y=250;

 poschar2.x=500;
 poschar2.y=250;
 //posecran1=pos mte3 ecran2
    posecran1=&test;//fix lel core dumped
    //int poscam 1 & 2
    poscam.x=0;
    poscam.y=0;
    poscam2.x=0;
    poscam2.y=0;
    posecran1->x=500;
    posecran1->y=0;

  SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(1000,400,32, SDL_HWSURFACE|SDL_DOUBLEBUF | SDL_RESIZABLE);
    poscam.h=ecran->h;
    poscam.w=ecran->w/2;
    poscam2.h=ecran->h;
    poscam2.w=ecran->w/2;
    SDL_WM_SetCaption("game", NULL);

background=IMG_Load("map2.png");
char1=IMG_Load("p.png");
char2=IMG_Load("p.png");
enemy.perso=IMG_Load("enemy.png");
enemy.pos.x=500-enemy.perso->w;
enemy.pos.y=800;

/*SDL_BlitSurface(enemy.perso,NULL,ecran,&enemy.pos);
SDL_BlitSurface(background, &poscam ,ecran, NULL);
SDL_BlitSurface(background, &poscam2 ,ecran, posecran1);
SDL_BlitSurface(char1, &poscam ,ecran, &poschar);
SDL_BlitSurface(char2, &poscam2 ,ecran, &poschar2);*/
SDL_EnableKeyRepeat(1, 1);
//init controls
set1.up=SDLK_UP;
set1.down=SDLK_DOWN;
set1.left=SDLK_LEFT;
set1.right=SDLK_RIGHT;
set2.up=SDLK_z;
set2.down=SDLK_s;
set2.left=SDLK_q;
set2.right=SDLK_d;
while (continuer)
   {

    SDL_WaitEvent(&event) ;

    SDL_Flip(ecran);
    switch(event.type)
        {

            case SDL_QUIT:

                continuer = 0;

                break;
                case SDL_KEYDOWN  :
                {
                  split(&x,set1,set2,&poschar,posecran1,&poschar2,ecran,background,char1,char2,&poscam,&poscam2);
                  bout(&enemy,ecran,poscam,where,&realtime);
                  //printf("%d\n",x.j1 );
                }
                }
SDL_BlitSurface(background, &poscam ,ecran,NULL);
SDL_BlitSurface(background, &poscam2 ,ecran, posecran1);
SDL_BlitSurface(char2, NULL ,ecran,&poschar2);
SDL_BlitSurface(char1, NULL ,ecran,&poschar);
SDL_BlitSurface(enemy.perso,NULL,ecran,&enemy.pos);
//printf("%d\n",enemy.pos.y);

    SDL_Flip(ecran);


  }
}
