#include "GSIntro.h"

GSIntro::GSIntro()
{
	m_currentTime = 0.f;
}

GSIntro::~GSIntro()
{
}

void GSIntro::Exit()
{
}

void GSIntro::Pause()
{
}

void GSIntro::Resume()
{
}

void GSIntro::Init()
{
	shape.setSize(sf::Vector2f(200, 200));
	shape.setFillColor(sf::Color::Red);
	printf("Init GSIntro\n");
}

void GSIntro::Update(float deltaTime)
{
	m_currentTime += deltaTime;
	if (m_currentTime >= 3.f) {
		GameStateMachine::GetInstance()->ChangeState(StateTypes::MENU);
	}
}

void GSIntro::Render(sf::RenderWindow* window)
{
	window->draw(shape);
}
