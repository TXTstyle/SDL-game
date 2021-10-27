#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#define WIDTH 1280;
#define HIGHT 720;

bool running, fullscreen;

void Update() {
    
}

void Input() {

}

void Draw() {

}

int main(int argc, char* args[]) {
    running = 1;
    while (running)
    {
       Update();
       Input();
       Draw(); 
    }
    
    return 0;
}