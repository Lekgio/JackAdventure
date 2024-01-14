#pragma once
#include "../GameManager/ResourceManager.h"
#include "HitBox.h"

class Creep {
public:
	Creep();
	~Creep();
	virtual void Init();
	virtual void Update(float deltaTime);
	virtual void Render(sf::RenderWindow* window);

	HitBox* getHitBox() { return m_HitBox; }
	void setStartPoint(sf::Vector2f point) { m_startPoint = point; }
protected:
	sf::Vector2f m_startPoint;
	HitBox* m_HitBox;
	Animation* m_currentAni;
	Animation* m_deathAni;
	Animation* m_runAni;
};