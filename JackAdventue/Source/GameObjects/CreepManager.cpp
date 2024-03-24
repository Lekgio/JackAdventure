#include "CreepManager.h"

void CreepManager::Init(CollisionManager &collisionManager)
{
	m_CreepNum = 10;
	for (int i = 0; i < m_CreepNum; i++) {
		CreepRino* creepR = new CreepRino();
		creepR->Init();
		creepR->getHitBox()->setAlive(false);
		m_ListCreepRino.push_back(creepR);
		collisionManager.addObj(creepR->getHitBox());

		CreepBat* creepB = new CreepBat();
		creepB->Init();
		creepB->getHitBox()->setAlive(false);
		m_ListCreepBat.push_back(creepB);
		collisionManager.addObj(creepB->getHitBox());
	}
}

void CreepManager::Update(float deltaTime)
{
	for (auto creep : m_ListCreepRino) {
		creep->Update(deltaTime);
	}

	for (auto creep : m_ListCreepBat) {
		creep->Update(deltaTime);
	}
}

void CreepManager::Render(sf::RenderWindow* window)
{
	for (auto creep : m_ListCreepRino) {
		creep->Render(window);
	}

	for (auto creep : m_ListCreepBat) {
		creep->Render(window);
	}
}
