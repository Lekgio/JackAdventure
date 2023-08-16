#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
    sf::Sprite shape;

    {
        sf::Texture texture;
        texture.loadFromFile("../Data/Textures/HB.png");
        shape.setTexture(texture);
    }
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        window.draw(shape);
        window.display();
    }

    return 0;
}