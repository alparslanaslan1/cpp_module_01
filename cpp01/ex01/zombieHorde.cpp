#include "Zombie.hpp"

// zombieHorde: N adet zombi oluşturur ve ilk zombinin işaretçisini döndürür
Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0) {
        return NULL; // Geçersiz bir sayı için NULL döndür
    }

    // Tek bir tahsiste N adet zombi oluştur
    Zombie* horde = new Zombie[N];

    // Her bir zombiye isim ata
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name + "_" + std::to_string(i + 1)); // Benzersiz isim eklemek için
    }

    return horde; // İlk zombinin işaretçisini döndür
}
