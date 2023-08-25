#pragma once
#include "GameStateBase.h"
#include "../GameObjects/Layer.h"


class GSPlay :public GameStateBase {
public:
	GSPlay();
	virtual ~GSPlay();

	void Exit();
	void Pause();
	void Resume();

	void Init();
	void Update(float deltaTime);
	void Render(sf::RenderWindow* window);
private:
	Layer m_bg;
};