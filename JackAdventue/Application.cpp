#include "Application.h"

void Application::Run()
{
    Init();
    sf::Clock clock;
    float deltaTime = 0.f;
    while (m_window->isOpen())
    {
        deltaTime = clock.restart().asSeconds();
        sf::Event event;
        while (m_window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                m_window->close();
        }
        Update(deltaTime);
        Render();
    }
}

Application::~Application()
{
    if(m_window != nullptr) delete m_window;
}

void Application::Init()
{
    m_window = new sf::RenderWindow(sf::VideoMode(screenWidth, screenHeight), titleGame, sf::Style::Close);
}

void Application::Update(float deltaTime)
{
    // Doing something
}

void Application::Render()
{
    m_window->clear(sf::Color::White);
    // Drawing something
    m_window->display();
}
