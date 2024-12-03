#include "Weapon.hpp"

// Constructor
Weapon::Weapon(const std::string& type) : type(type) {}

// getType: Silah türünü döndürür
const std::string& Weapon::getType() const
{
    return type;
}

// setType: Silah türünü ayarlar
void Weapon::setType(const std::string& newType)
{
    type = newType;
}
