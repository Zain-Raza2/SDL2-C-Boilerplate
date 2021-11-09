#ifndef MAIN_H
#define MAIN_H

#include "commons.h"

App app;

extern void cleanup(void);
extern void initSDL(void);
extern void prepareScene(void);
extern void presentScene(void);
extern void processInput(void);

#endif