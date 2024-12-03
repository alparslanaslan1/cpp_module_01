#include "Harl.hpp"

// Constructor: Şikayet işlevlerini işaretçilerine atar
Harl::Harl()
{
    complaints[0] = &Harl::debug;
    complaints[1] = &Harl::info;
    complaints[2] = &Harl::warning;
    complaints[3] = &Harl::error;
}

// Debug şikayeti
void Harl::debug(void)
{
    std::cout << "I love extra bacon on my burger!" << std::endl;
}

// Info şikayeti
void Harl::info(void)
{
    std::cout << "I can't believe adding extra bacon costs more money!" << std::endl;
}

// Warning şikayeti
void Harl::warning(void)
{
    std::cout << "I think I deserve extra bacon for free!" << std::endl;
}

// Error şikayeti
void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager!" << std::endl;
}

// Genel complain fonksiyonu, verilen seviyeye göre ilgili şikayeti çağırır
void Harl::complain(std::string level)
{
    // Seviye sırasını kontrol et ve ilgili fonksiyonu çağır
    if (level == "DEBUG")
        (this->*complaints[0])();
    else if (level == "INFO")
        (this->*complaints[1])();
    else if (level == "WARNING")
        (this->*complaints[2])();
    else if (level == "ERROR")
        (this->*complaints[3])();
    else
        std::cout << "Unknown level!" << std::endl;
}
