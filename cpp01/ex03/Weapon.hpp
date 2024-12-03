#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
    std::string type; // Silah türü

public:
    Weapon(const std::string& type);
    const std::string& getType() const; // Silah türünü döndürür
    void setType(const std::string& newType); // Silah türünü ayarlar
};

#endif
