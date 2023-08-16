#pragma once
#include <SFML/Graphics.hpp>
#include "GameManager/ResourceManager.h"
#include "GameConfig.h"

class Application {
public:
	void Run();
	~Application();
private:
	void Init();
	void Update(float deltaTime);
	void Render();
private:
	sf::RenderWindow* m_window;
	sf::Sprite m_Sprite;
};