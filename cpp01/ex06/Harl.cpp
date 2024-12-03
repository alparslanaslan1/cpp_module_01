#include "Harl.hpp"

// DEBUG mesajı
void Harl::debug(void) 
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
}

// INFO mesajı
void Harl::info(void) 
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

// WARNING mesajı
void Harl::warning(void) 
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

// ERROR mesajı
void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

// complain fonksiyonu
void Harl::complain(std::string level) 
{
    switch (level[0]) 
    {  // Seviyeyi ilk harfini kontrol ederek switch-case'e giriyoruz
        case 'D':  // DEBUG
            this->debug();
            this->info();
            this->warning();
            this->error();
            break;
        case 'I':  // INFO
            this->info();
            this->warning();
            this->error();
            break;
        case 'W':  // WARNING
            this->warning();
            this->error();
            break;
        case 'E':  // ERROR
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}


