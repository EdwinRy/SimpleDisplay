#include <stdlib.h>
#include <SDL2/SDL.h>
#include "SimpleDisplay.h"


SDL_Window * window;
SDL_Renderer * renderer;
SDL_Texture * texture;
SDL_Event event;
int width,height;
char* pixels;
//Display Manipulation
void openDisplay(int w, int h)
{	
	width = w;
	height = h;
	if(SDL_Init(SDL_INIT_VIDEO) != 0){return -1;}
	window = SDL_CreateWindow("Display", SDL_WINDOWPOS_UNDEFINED,
				SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888,
				SDL_TEXTUREACCESS_STREAMING, width, height);
	pixels = malloc(4 * (width * height));
}

void updateDisplay()
{
	while(SDL_PollEvent(&event))
	{
		if(event.type == SDL_QUIT){closeDisplay();}
	}
	SDL_UpdateTexture(texture, NULL, pixels + 0, width * 4);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	SDL_RenderPresent(renderer);
}

void closeDisplay()
{
	SDL_Quit();
}

//Drawing functions
void clearDisplay()
{
	SDL_Delay(2);
	SDL_RenderClear(renderer);
}

void drawTriangle()
{

}

void drawRectange()
{

}

void drawCircle()
{

}

void drawPixel()
{

}
