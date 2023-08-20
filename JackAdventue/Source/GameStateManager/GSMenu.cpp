#include "GSMenu.h"

GSMenu::GSMenu()
{
}

GSMenu::~GSMenu()
{
}

void GSMenu::Exit()
{
}

void GSMenu::Pause()
{
}

void GSMenu::Resume()
{
}

void GSMenu::Init()
{
	GameButton* button;
	// Exit button
	button = new GameButton();
	button->Init();
	button->setOnClick([]() {WConnect->getWindow()->close(); });
	m_ListBtn.push_back(button);

	// Play Button
	button = new GameButton();
	button->Init();
	button->setOnClick([]() {GSM->ChangeState(StateTypes::PLAY); });
	button->setPosition(screenWidth / 2, screenHeight / 2 );
	button->setFillColor(sf::Color::Red);
	button->setOrigin(button->getSize() / 2.f);
	m_ListBtn.push_back(button);
}

void GSMenu::Update(float deltaTime)
{
	for (auto btn : m_ListBtn) {
		btn->Update(deltaTime);
	}
}

void GSMenu::Render(sf::RenderWindow* window)
{
	for (auto btn : m_ListBtn) {
		btn->Render(window);
	}

}
