#include "Zombie.hpp"

// Test fonksiyonları
int main()
{
    // Heap'te bir zombi oluştur
    std::cout << "Creating a zombie on the heap:" << std::endl;
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce(); // Zombiyi duyur
    delete heapZombie; // Manuel olarak zombiyi yok et

    std::cout << std::endl;

    // Stack'te bir zombi oluştur
    std::cout << "Creating a zombie on the stack:" << std::endl;
    randomChump("StackZombie");

    std::cout << std::endl;

    return 0;
}
