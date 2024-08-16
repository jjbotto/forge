#include <SFML/Graphics.hpp>

class Character {
    sf::Sprite sprite;
    std::string name;
    sf::Texture texture;
    sf::Vector2f position;
    float health;
    float speed;

    public:
    Character(const std::string& texturePath, const sf::Vector2f& position, std::string name);

    // gets character position
    sf::Vector2f getPosition() const;

    // sets character position
    void setPosition(const sf::Vector2f& position);

};