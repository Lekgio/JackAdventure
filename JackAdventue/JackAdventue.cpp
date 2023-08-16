#include <SFML/Graphics.hpp>
#include "Animation.h"


int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "JackAdventure");
    sf::Texture tex;
    tex.loadFromFile("DinoSprites.png");
    Animation ani(tex, sf::Vector2i(6,1), 0.1f);
    ani.setScale(2.f, 2.f);

    sf::Clock clock;
    float deltaTime = 0.f;
    while (window.isOpen())
    {
        deltaTime = clock.restart().asSeconds();
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        ani.Update(deltaTime);
        window.clear(sf::Color::White);
        window.draw(ani);
        window.display();
    }

    return 0;
}