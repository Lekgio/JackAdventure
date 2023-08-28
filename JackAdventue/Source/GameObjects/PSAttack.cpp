#include "PSAttack.h"

PSAttack::PSAttack(IPlayer* player)
{
	m_Player = player;
}

void PSAttack::Init()
{
	m_Animation = new Animation(*DATA->getTexture("Character/Attack"), sf::Vector2i(14, 1), 0.1f);
}

void PSAttack::Update(float deltaTime)
{
	m_Animation->Update(deltaTime);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		m_Player->changeNextState(RUN);
		printf("Run\n");
	}
}

void PSAttack::Render(sf::RenderWindow* window)
{
	window->draw(*m_Animation);
}
