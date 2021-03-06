#pragma once

#ifndef INCLUDED_GAME_H_
#define INCLUDED_GAME_H_

#include "SDL.h"

struct Vector2
{
	float x;
	float y;
};

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

	Vector2 mPaddlePos;
	Vector2 mBallPos;
};

#endif // !INCLUDED_GAME_H_