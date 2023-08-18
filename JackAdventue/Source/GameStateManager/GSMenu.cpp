#include "GSMenu.h"

GSMenu::GSMenu()
{
}

GSMenu::~GSMenu()
{
}

void GSMenu::Exit()
{
}

void GSMenu::Pause()
{
}

void GSMenu::Resume()
{
}

void GSMenu::Init()
{
	printf("Init GSMenu\n");
	shape.setRadius(100);
	shape.setFillColor(sf::Color::Blue);
}

void GSMenu::Update(float deltaTime)
{
}

void GSMenu::Render(sf::RenderWindow* window)
{
	window->draw(shape);
}
