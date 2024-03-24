#pragma once
#include "GameStateBase.h"
#include "../GameObjects/ParallaxBackground.h"
#include "../GameObjects/Player.h"
#include "../GameObjects/CollisionManager.h"
#include "../GameObjects/CreepManager.h"

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
	ParallaxBackground m_Background;
	Player m_Player;
	CollisionManager m_CollisionManager;
	CreepManager m_CreepManager;
};