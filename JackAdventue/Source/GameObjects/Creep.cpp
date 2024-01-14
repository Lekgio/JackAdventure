#include "Creep.h"

Creep::Creep()
{
}

Creep::~Creep()
{
	m_currentAni = nullptr;
	if (m_deathAni != nullptr) {
		delete m_deathAni;
	}
	if (m_runAni != nullptr) {
		delete m_runAni;
	}
	if (m_HitBox != nullptr) {
		delete m_HitBox;
	}
}

void Creep::Init()
{
	m_HitBox = new HitBox(sf::Vector2i(45, 28));
	m_HitBox->Init(sf::Vector2f(200, 0));
	m_HitBox->setPosition(screenWidth, groundY);

	m_runAni = new Animation(*DATA->getTexture("Rino/Run (52x34)"), sf::Vector2i(6, 1), 0.1f);
	m_deathAni = new Animation(*DATA->getTexture("Rino/Hit (52x34)"), sf::Vector2i(5, 1), 0.1f);
	m_currentAni = m_runAni;
}

void Creep::Update(float deltaTime)
{
	m_currentAni->Update(deltaTime);
	m_HitBox->move(-m_HitBox->getVelocity() * deltaTime);
	if (m_HitBox->getPosition().x < -0) m_HitBox->setPosition(m_startPoint);
	m_currentAni->setPosition(getHitBox()->getPosition());
}

void Creep::Render(sf::RenderWindow* window)
{
	window->draw(*m_currentAni);
	window->draw(*m_HitBox);
}
