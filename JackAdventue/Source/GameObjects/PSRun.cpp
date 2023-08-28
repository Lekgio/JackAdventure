#include "PSRun.h"

PSRun::PSRun(IPlayer* player)
{
	m_Player = player;
}

void PSRun::Init()
{
	m_Animation = new Animation(*DATA->getTexture("Character/Run"), sf::Vector2i(8,1), 0.1f);
}

void PSRun::Update(float deltaTime)
{
	m_Animation->Update(deltaTime);
}

void PSRun::Render(sf::RenderWindow* window)
{
	window->draw(*m_Animation);
}
