#include "HumanA.hpp"

// Constructor
HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}

// attack: Saldırı yapar
void HumanA::attack() const
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
