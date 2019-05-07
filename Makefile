prog:main.o splitscreen.o bout_map.o
	gcc main.o splitscreen.o bout_map.o -o prog -g -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
main.o:main.c
	gcc -c main.c -g
splitscreen.o:splitscreen.c
	gcc -c splitscreen.c -g
bout_map.o:bout_map.c
	gcc -c bout_map.c -g
