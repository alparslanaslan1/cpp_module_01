#include "Zombie.hpp"

// newZombie: Heap'te bir zombi oluşturur ve geri döndürür
Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}
