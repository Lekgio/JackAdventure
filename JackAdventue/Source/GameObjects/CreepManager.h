#pragma once
#include "../GameManager/ResourceManager.h"
#include "CreepRino.h"
#include "CreepBat.h"
#include "CollisionManager.h"

class CreepManager {
public:
	void Init(CollisionManager& collisionManager);
	void Update(float deltaTime);
	void Render(sf::RenderWindow* window);

private:
	std::list<CreepRino*> m_ListCreepRino;
	std::list<CreepBat*> m_ListCreepBat;
	int m_CreepNum;
};