#include "PSDeath.h"

PSDeath::PSDeath(IPlayer* player)
{
	m_Player = player;
}

void PSDeath::Init()
{
	m_Animation = new Animation(*DATA->getTexture("Character/Death"), sf::Vector2i(24, 1), 0.1f);
}

void PSDeath::Update(float deltaTime)
{
	m_Animation->Update(deltaTime);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		m_Player->changeNextState(RUN);
	}
}

void PSDeath::Render(sf::RenderWindow* window)
{
	window->draw(*m_Animation);
}
