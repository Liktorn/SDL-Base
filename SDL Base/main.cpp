#include <SDL.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <string>

int main(int argc, char ** argv) {


	

	static int WIDTH = 800;
	static int HEIGHT = 600;

	int x1 = rand() % 100;
	std::cout << x1 << std::endl;

	if (SDL_Init(SDL_INIT_VIDEO) == 0) {
		SDL_Window* window = NULL;
		SDL_Renderer* renderer = NULL;

		if (SDL_CreateWindowAndRenderer(WIDTH, HEIGHT, 0, &window, &renderer) == 0) {
			SDL_bool done = SDL_FALSE;


			



			while (!done) {
				SDL_Event event;

				SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
				SDL_RenderClear(renderer);

				SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
/*
				for (int i = 0; i < 3; i++) {
					
					SDL_RenderDrawLine(renderer, x1, x2, y1, y2);
					std::cout << "x1: " << x1 << "x2: " << x2 << "y1: " << y1 << "y2: " << y2 << std::endl;
				}*/
				srand((unsigned int)time(NULL));
				int x1 = rand() % WIDTH + 1;
				int x2 = rand() % WIDTH + 1;
				int x3 = rand() % WIDTH + 1;
				int y1 = rand() % HEIGHT + 1;
				int y2 = rand() % HEIGHT + 1;
				int y3 = rand() % HEIGHT + 1;
				
				SDL_RenderDrawLine(renderer, x1, y1, x2, y2);
				SDL_RenderDrawLine(renderer, x2, y2, x3, y3);
				SDL_RenderDrawLine(renderer, x3, y3, x1, y1);
				SDL_RenderPresent(renderer);
				
				while (SDL_PollEvent(&event)) {
					if (event.type == SDL_QUIT) {
						done = SDL_TRUE;
					}
				}
			}
		}

		if (renderer) {
			SDL_DestroyRenderer(renderer);
		}
		if (window) {
			SDL_DestroyWindow(window);
		}
	}
	SDL_Quit();



	//Pause the console so that the window does not exit imediatly
	std::cout << "like this" << std::endl;
	system("PAUSE"); // <-- this will stop the console from closing.

	return 0;
}