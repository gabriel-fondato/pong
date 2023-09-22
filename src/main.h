#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

SDL_Render* renderer;
SDL_Window* window;
TTF_Font* font;
SDL_Color color
bool running = true;
int frameCount, timerFPS, lastFrame, FPS;
const int WIDTH = 1024;
const int HEIGHT = 768;
const int fontSize = 32;
