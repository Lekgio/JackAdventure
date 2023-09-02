#pragma once
#include "../GameManager/ResourceManager.h"

class HitBox :public sf::RectangleShape{
public:
	HitBox(sf::Vector2i size);
	~HitBox();
	void Init(sf::Vector2f velocity);

	sf::Vector2f getVelocity();
private:
	sf::Vector2f m_Velocity;
};