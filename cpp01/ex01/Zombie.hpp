#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name; // Zombinin adı

public:
    // Constructor
    Zombie();

    // Destructor
    ~Zombie();

    // announce fonksiyonu, zombiyi tanıtır
    void announce(void) const;
	void setName(const std::string& name);
};

//Zombi sürüsü oluşturan fonksiyon
Zombie* zombieHorde(int N, std::string name);

#endif
