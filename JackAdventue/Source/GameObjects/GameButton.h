#pragma once
#include <SFML/Graphics.hpp>
#include "../GameManager/WindowConnector.h"

class GameButton :public sf::RectangleShape{
public:
	GameButton();
	~GameButton();

	void Init();
	void Update(float deltaTime);
	void Render(sf::RenderWindow* window);

	void HandleTouchEvent();
	bool isHandle();
private:
	void (*btnClickFunc)();
	bool m_isHanding;
};