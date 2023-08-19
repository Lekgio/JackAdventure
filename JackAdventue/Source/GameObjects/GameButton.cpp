#include "GameButton.h"

GameButton::GameButton()
{
	m_isHanding = false;
}

GameButton::~GameButton()
{
}

void GameButton::Init()
{
	this->setSize(sf::Vector2f(100, 100));
	this->setFillColor(sf::Color::Green);
}

void GameButton::Update(float deltaTime)
{
}

void GameButton::Render(sf::RenderWindow* window)
{
	window->draw(*this);
}

void GameButton::HandleTouchEvent()
{
	if (this->getGlobalBounds().contains((sf::Vector2f)sf::Mouse::getPosition(*WConnect->getWindow())));
}

bool GameButton::isHandle()
{
	return m_isHanding;
}
