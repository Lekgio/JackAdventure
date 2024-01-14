#include "GSPlay.h"

GSPlay::GSPlay()
{
}

GSPlay::~GSPlay()
{
}

void GSPlay::Exit()
{
}

void GSPlay::Pause()
{
}

void GSPlay::Resume()
{
}

void GSPlay::Init()
{
	printf("Play game\n");
	m_Background.Init();
	m_Player.Init();
	m_CollisionManager.addObj(m_Player.getHitBox());
	Creep* creep = new CreepBat();
	m_listCreep.push_back(creep);

	creep = new CreepRino();
	m_listCreep.push_back(creep);

	for (auto it : m_listCreep) {
		it->Init();
		m_CollisionManager.addObj(it->getHitBox());
	}
}

void GSPlay::Update(float deltaTime)
{

	if (m_Player.getHitBox()->isAlive()) m_Background.Update(deltaTime);
	m_Player.Update(deltaTime);
	for (auto it : m_listCreep) {
		it->Update(deltaTime);
	}
	m_CollisionManager.Update();
}

void GSPlay::Render(sf::RenderWindow* window)
{
	m_Background.Render(window);
	m_Player.Render(window);
	for (auto it : m_listCreep) {
		it->Render(window);
	}
}
