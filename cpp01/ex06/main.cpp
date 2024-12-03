#include "Harl.hpp"

int main(int argc, char **argv) 
{
    Harl harl;

    // Argüman kontrolü
    if (argc != 2) 
    {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    // Harl'ın şikayet fonksiyonunu çağırıyoruz
    std::string level = argv[1];
    harl.complain(level);

    return 0;
}
