#pragma once
#include "Layer.h"

class ParallaxBackground {
public:
	void Init();
	void Update(float deltaTime);
	void Render(sf::RenderWindow* window);
private:
	std::list<Layer*> m_Background;
};