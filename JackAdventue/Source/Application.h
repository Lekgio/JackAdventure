#pragma once
#include "GameStateManager/GameStateMachine.h"
#include "GameManager/ResourceManager.h"
#include "GameObjects/GameButton.h"

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
};