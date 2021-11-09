#include "commons.h"

int main(int argc, const char * argv[]) 
{
    memset(&app, 0, sizeof(App));

    initSDL();

    atexit(cleanup);

    while (1)
    {
        prepareScene();
        
        SDL_SetRenderDrawColor(app.renderer, 255, 255, 255, 255);

        processInput();

        presentScene();

        SDL_Delay(16);
    }
    

    initSDL();
}