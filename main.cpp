#include <iostream>
#include <SDL.h>

int main()
{
 if(SDL_Init(SDL_INIT_VIDEO))
 {
     std::cerr<<"error int SDL\n";
     exit(EXIT_FAILURE);
 }
 SDL_Rect screenSize;
 SDL_GetDisplayBounds(0,&screenSize);

 SDL_Window *window = SDL_CreateWindow (
             "OpenGL DEMO",
             SDL_WINDOWPOS_CENTERED,
             SDL_WINDOWPOS_CENTERED,
             screenSize.w/2,
             screenSize.h/2,
             SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE
             );
 SDL_Delay(10000);
}

