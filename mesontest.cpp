#include <iostream>
#include <SDL2/SDL.h>

int main() 
{
    std::cout << "New Repository!" << "\n";
    std::cout << "Testing Changes!" << "\n";

    SDL_Renderer *renderer;
    SDL_Window *window = SDL_CreateWindow("SDL2 Meson Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    SDL_Event event;

    while(1) 
    {
        
        SDL_PollEvent(&event);
        
        if (event.type == SDL_QUIT) 
        {
            break;
        }
        
        SDL_SetRenderDrawColor(renderer, 0xff, 0xff, 0xff, 0xff);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);

    }

    return 0;
}