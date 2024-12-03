#include "HumanB.hpp"

// Constructor
HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {}

// setWeapon: Silah ataması yapar
void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

// attack: Saldırı yapar (silah varsa)
void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " has no weapon to attack with." << std::endl;
    }
}
