#include <iostream>
#include <SDL2/SDL.h>

int main() {
    std::cout << "New Repository!" << "\n";
    std::cout << "Testing Changes!" << "\n";

    SDL_Renderer *renderer;
    SDL_Window *window = SDL_CreateWindow("SDL2 Meson Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    while(1) {
        
    }
    return 0;
}