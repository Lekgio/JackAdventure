#pragma once
#include <SFML/Graphics.hpp>
#include "GameStateMachine.h"

class GameStateBase {
public:
	GameStateBase(){}
	virtual ~GameStateBase(){}

	virtual void Exit() = 0;
	virtual void Pause() = 0;
	virtual void Resume() = 0;

	virtual void Init() = 0;
	virtual void Update(float deltaTime) = 0;
	virtual void Render(sf::RenderWindow window) = 0;

	static GameStateBase* CreateState(StateTypes st);
};

GameStateBase* GameStateBase::CreateState(StateTypes st) {
	switch (st)
	{
	case INVALID:
		break;
	case INTRO:
		break;
	case MENU:
		break;
	case PLAY:
		break;
	case END:
		break;
	default:
		break;
	}
}