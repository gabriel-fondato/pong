
#include "log.h"
#include "main.h"

int main(int argc, char* args[]) {
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) 
        log("Falied at SDL_Init()");
    if(SDL_CreateWindowAndRenderer(WIDTH, HEIGHT,0, &window, &renderer) < 0)
        log("Falied at SDL_CreateWindowAndRenderer()");
    TTF_Init();
    font = TTF_OpenFont("comicsans.ttf", fontSize);

    while(running) { //THE MAIN THING!!!!!






    }
    TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

