#include<iostream>
#include<SDL2/SDL.h>

int main() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL couldn't be init" << SDL_GetError();
    } else {
        std::cout << "SDL video is ready to go\n";
    }
    return 0;
}