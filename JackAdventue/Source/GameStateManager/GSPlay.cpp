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
	m_CreepManager.Init(m_CollisionManager);
}

void GSPlay::Update(float deltaTime)
{

	if (m_Player.getHitBox()->isAlive()) m_Background.Update(deltaTime);
	m_Player.Update(deltaTime);
	m_CreepManager.Update(deltaTime);
	m_CollisionManager.Update();
}

void GSPlay::Render(sf::RenderWindow* window)
{
	m_Background.Render(window);
	m_Player.Render(window);
	m_CreepManager.Render(window);
}
