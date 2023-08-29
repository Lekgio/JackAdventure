#include "HitBox.h"

HitBox::HitBox(sf::Vector2i size):RectangleShape((sf::Vector2f)size)
{
	this->setOrigin((sf::Vector2f)size / 2.f);
	this->setFillColor(sf::Color(0, 0, 0, 0));
	this->setOutlineThickness(1.f);
	this->setOutlineColor(sf::Color::Red);
}

HitBox::~HitBox()
{

}
