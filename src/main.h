#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

SDL_Renderer* renderer;
SDL_Window* window;
SDL_Surface *surface;
TTF_Font *font;
SDL_Color color;
SDL_Event event;
SDL_Rect leftPaddle, rightPaddle;
bool running = true;
const int WIDTH = 1024;
const int HEIGHT = 768;
const int fontSize = 32;
