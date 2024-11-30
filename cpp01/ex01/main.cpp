#include "Zombie.hpp"

int main()
{
    int N = 5; // Kaç adet zombi oluşturulacağı
    std::string baseName = "Zombie";

    // Zombi sürüsü oluştur
    Zombie* horde = zombieHorde(N, baseName);

    if (horde == NULL) {
        std::cout << "Failed to create zombie horde." << std::endl;
        return 1;
    }

    // Her zombinin announce() fonksiyonunu çağır
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    // Zombileri yok et
    delete[] horde;

    return 0;
}
