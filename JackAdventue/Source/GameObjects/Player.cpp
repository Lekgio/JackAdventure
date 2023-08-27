#include "Player.h"

Player::Player()
{
	m_currentState = nullptr;
	m_runState;
	m_jumpState;
	m_fallState;
	m_deathState;
	m_attackState;
}

Player::~Player()
{
	if (m_runState != nullptr) {
		delete m_runState;
	}
	if (m_jumpState != nullptr) {
		delete m_jumpState;
	}
	if (m_fallState != nullptr) {
		delete m_fallState;
	}
	if (m_deathState != nullptr) {
		delete m_deathState;
	}
	if (m_attackState != nullptr) {
		delete m_attackState;
	}
	m_currentState = nullptr;
}

void Player::changeNextState(IPState::STATE nextState)
{
	m_nextState = m_nextState;
}

void Player::Init()
{
	m_runState->Init();
	m_jumpState->Init();
	m_fallState->Init();
	m_deathState->Init();
	m_attackState->Init();
}

void Player::Update(float deltaTime)
{
	m_currentState->Update(deltaTime);
}

void Player::Render(sf::RenderWindow* window)
{
	m_currentState->Render(window);
}

void Player::performStateChange()
{
	if (m_nextState != IPState::SNULL) {
		switch (m_nextState)
		{
		case IPState::RUN:
			break;
		case IPState::JUMP:
			break;
		case IPState::FALL:
			break;
		case IPState::ATTACK:
			break;
		case IPState::DEATH:
			break;
		default:
			break;
		}
	}
}
