#include <character.hpp>

Character::Character(const std::string& texturePath, const sf::Vector2f& position, std::string name) 
    : name(name) 
{
    texture.loadFromFile(texturePath);
    sprite.setTexture(texture);
    sprite.setPosition(position);
}

sf::Vector2f Character::getPosition() const {
    return sprite.getPosition();
}

void Character::setPosition(const sf::Vector2f& newPosition) {
    sprite.setPosition(newPosition);
}