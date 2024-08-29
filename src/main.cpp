#include <SFML/Graphics.hpp>
#include <iostream>

int main() {

    // INITIALIZE
    sf::RenderWindow window(sf::VideoMode(800, 600), "Forge");

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    
    // INITIALIZE
    // LOAD
    sf::Texture playerTexture;
    sf::Sprite playerSprite;

    playerTexture.loadFromFile("../assets/characters/Knight/Knight_noBKG_KnightIdle_strip.png");
    playerSprite.setTexture(playerTexture);
    playerSprite.setTextureRect(sf::IntRect(0, 0, 64,64));
    playerSprite.setPosition(sf::Vector2f(500, 500)); // Place the player sprite in the center of the screen

    // LOAD 

    while (window.isOpen()) {
        // UPDATE
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {

                window.close();
            }
        }

        // Move right
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
            playerSprite.move(sf::Vector2f(0.05, 0));
        }
        // Move down
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
            playerSprite.move(sf::Vector2f(0, 0.05));
        }
        // Move left
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
            playerSprite.move(sf::Vector2f(-0.05, 0));
        }
        // Move up
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            playerSprite.move(sf::Vector2f(0, -0.05));
        }

        // UPDATE

        // DRAW
        window.clear(sf::Color::Transparent);
        window.draw(playerSprite); // Draw the player sprite on the screen

        window.display();
        // DRAW
    }

    return 0;
}