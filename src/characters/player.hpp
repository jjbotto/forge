#include <character.hpp>
#include <SFML/Graphics.hpp>

class Player : public Character {
    std::string helmet;
    std::string chestPiece;
    std::string legs;
    std::string tool;
    std::map<std::string, sf::Texture> gearTextures;

    public:
    Player(const std::string texturePath, const sf::Vector2f position, const std::string name);

    void move();
    
};