#pragma once
#include "../GameManager/ResourceManager.h"
#include "HitBox.h"

class Creep {
public:
	Creep();
	~Creep();
	void Init();
	void Update(float deltaTime);
	void Render(sf::RenderWindow* window);

	HitBox* getHitBox() { return m_HitBox; }
private:
	HitBox* m_HitBox;
	Animation* m_currentAni;
	Animation* m_deathAni;
	Animation* m_runAni;
};