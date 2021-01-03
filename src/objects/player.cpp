#include <iostream>

class Player
{
    private:
        std::string name;

        int gold { 100 };

        int strength { 10 };
        int dexterity { 10};
        int constitution { 10 };
        int intelligence { 10 };

    public:
        Player(std::string Name)
        {
            name = Name;
        }

        std::string Player::getPlayerName() { return name; }
        int Player::getPlayerGold() { return gold; }
}