#include "render.h"
#include "log.h"
#include "main.h"

int main(int argc, char* args[]) {
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) 
        log("Falied at SDL_Init()");
    if(SDL_CreateWindowAndRenderer(WIDTH, HEIGHT,0, &window, &renderer) < 0)
        log("Falied at SDL_CreateWindowAndRenderer()");
    TTF_Init()
    font = TTF_OpenFont("comicsans.ttf", fontSize);

}

