#include "PSJump.h"

PSJump::PSJump(IPlayer* player)
{
	m_Player = player;
}

void PSJump::Init()
{
	m_Animation = new Animation(*DATA->getTexture("Character/Jump"), sf::Vector2i(4, 1), 0.1f);
}

void PSJump::Update(float deltaTime)
{
	m_Animation->Update(deltaTime);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		m_Player->changeNextState(FALL);
		printf("player fall\n");
	}
}

void PSJump::Render(sf::RenderWindow* window)
{
	window->draw(*m_Animation);
}
