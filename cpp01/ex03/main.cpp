#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club("Blades of Chaos");

    HumanA Kratos("Kratos", club);
    Kratos.attack();
    club.setType("some other type of club");
    Kratos.attack();

    Weapon sword("Mjolnir");

    HumanB Thor("Thor");
    Thor.attack();
    Thor.setWeapon(sword);
    Thor.attack();

    return 0;
}
