#include "Zombie.hpp"

// randomChump: Stack'te bir zombi oluşturur ve duyurur
void randomChump(std::string name)
{
    Zombie stackZombie(name); // Stack üzerinde bir zombi oluştur
    stackZombie.announce();  // Zombi kendini duyurur
}
