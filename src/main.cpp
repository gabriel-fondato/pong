
#include "log.h"
#include "main.h"

void load() {
    leftPaddle.x = 0;
    leftPaddle.y = 0;
    leftPaddle.w = 32;
    leftPaddle.h = 32;
    color.r = 255;
    color.g = 255;
    color.b = 255;


}


void update() {



}

void input() {
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                running = false;
                break;
        }
    }


}

void draw() {
    SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 255);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, 255);
    SDL_RenderFillRect(renderer, &leftPaddle);
    SDL_RenderPresent(renderer);

}

int main(int argc, char* args[]) {

    if(SDL_Init(SDL_INIT_EVERYTHING) < 0) 
        log("Falied at SDL_Init()"||SDL_GetError());
    if(SDL_CreateWindowAndRenderer(WIDTH, HEIGHT,SDL_WINDOW_RESIZABLE, &window, &renderer) < 0)
        log("Falied at SDL_CreateWindowAndRenderer()"||SDL_GetError());
    SDL_SetWindowTitle(window,"Pong");
    
    TTF_Init();
    font = TTF_OpenFont("comicsans.ttf", fontSize);

    load();
    while(running) { //THE MAIN THING!!!!!
        input();
        update();
        draw();




    }
    TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}