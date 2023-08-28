#pragma once
#include "IPState.h"
#include "IPlayer.h"

class PSAttack :public IPState {
public:
	PSAttack(IPlayer* player);
	void Init();
	void Update(float deltaTime);
	void Render(sf::RenderWindow* window);
private:
	IPlayer* m_Player;
	Animation* m_Animation;

};
