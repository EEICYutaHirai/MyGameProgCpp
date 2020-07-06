#pragma once

#ifndef INCLUDED_GAME_H_
#define INCLUDED_GAME_H_

#include "SDL.h"

class Game
{
public:
	Game();
	bool Initialize();
	void RunLoop();
	void ShutDown();
	 
private:
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	SDL_Window* mWindow;
	SDL_Renderer* mRenderer;
	bool mIsRunning;
};

#endif // !INCLUDED_GAME_H_