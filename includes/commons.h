#ifndef COMMONS_H
#define COMMONS_H

#include "SDL2/SDL.h"
#include "defs.h"
#include "structs.h"

App app;

extern void initSDL(void);
extern void prepareScene(void);
extern void doInput(void);
extern void presentScene(void);

#endif