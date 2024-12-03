#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
    // Üye işlevlerinin işaretçileri
    void (Harl::*complaints[4])(void);

    // Şikayet fonksiyonları
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    // Constructor
    Harl();

    // Genel şikayet fonksiyonu
    void complain(std::string level);
};

#endif
