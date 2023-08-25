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
	printf("Play game");
	m_bg.Init("/Background layers/Background");
}

void GSPlay::Update(float deltaTime)
{
	m_bg.Update(deltaTime);
}

void GSPlay::Render(sf::RenderWindow* window)
{
	m_bg.Render(window);
}
