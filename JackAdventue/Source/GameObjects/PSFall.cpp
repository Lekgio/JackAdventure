#include "PSFall.h"

PSFall::PSFall(IPlayer* player)
{
	m_Player = player;
}

void PSFall::Init()
{
	m_Animation = new Animation(*DATA->getTexture("Character/Fall"), sf::Vector2i(2, 1), 0.1f);
}

void PSFall::Update(float deltaTime)
{
	m_Animation->Update(deltaTime);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		m_Player->changeNextState(RUN);
	}
}

void PSFall::Render(sf::RenderWindow* window)
{
	window->draw(*m_Animation);
}
