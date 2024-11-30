#include "Zombie.hpp"

// Default Constructor
Zombie::Zombie() : name("Unnamed") {}

// Destructor
Zombie::~Zombie() {
    std::cout << name << " is destroyed." << std::endl;
}

// announce: Zombinin kendini tanıtması
void Zombie::announce(void) const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// setName: Zombinin adını ayarlama
void Zombie::setName(const std::string& newName) {
    name = newName;
}
