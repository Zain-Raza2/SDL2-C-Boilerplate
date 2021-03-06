#ifndef COMMONS_H
#define COMMONS_H

#include "SDL2/SDL.h"
#include "defs.h"
#include "structs.h"

extern void initSDL(void);
extern void cleanup(void);
extern void prepareScene(void);
extern void processInput(void);
extern void presentScene(void);

#endif