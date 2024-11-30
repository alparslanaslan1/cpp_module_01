#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name; // Zombinin adı

public:
    // Constructor
    Zombie(std::string name);

    // Destructor
    ~Zombie();

    // announce fonksiyonu, zombiyi tanıtır
    void announce(void) const;
};

// Heap'te bir zombi oluşturur ve geri döndürür
Zombie* newZombie(std::string name);

// Stack'te bir zombi oluşturur ve duyurur
void randomChump(std::string name);

#endif
