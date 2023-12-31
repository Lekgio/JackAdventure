#pragma once
#include "IPState.h"
#include "IPlayer.h"

class PSDeath :public IPState {
public:
	PSDeath(IPlayer* player);
	void Init();
	void Update(float deltaTime);
	void Render(sf::RenderWindow* window);

	Animation* getAnimation() { return m_Animation; }
private:
	IPlayer* m_Player;
	Animation* m_Animation;

};