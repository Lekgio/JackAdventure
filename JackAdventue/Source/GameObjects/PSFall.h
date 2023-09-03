#pragma once
#include "IPState.h"
#include "IPlayer.h"

class PSFall :public IPState {
public:
	PSFall(IPlayer* player);
	void Init();
	void Update(float deltaTime);
	void Render(sf::RenderWindow* window);

	Animation* getAnimation() { return m_Animation; }
private:
	IPlayer* m_Player;
	Animation* m_Animation;

	float m_currentTime;
};