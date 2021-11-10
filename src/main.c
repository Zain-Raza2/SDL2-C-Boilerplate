#include "Core/main.h"

int main(int argc, const char * argv[]) 
{
    memset(&app, 0, sizeof(App));

    initSDL();

    atexit(cleanup);

    while (1)
    {
        prepareScene();

        processInput();

        presentScene();

        SDL_Delay(16);
    }
    

    initSDL();
}
