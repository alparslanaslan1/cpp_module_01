#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
private:
    std::string name; // İnsan adı
    Weapon& weapon;   // Referans olarak silah

public:
    HumanA(const std::string& name, Weapon& weapon);
    void attack() const;
};

#endif