#include "zombie.hpp"

int main()
{
    Zombie *zombie = NULL;

    zombie = newZombie("Bartola");
    zombie->announce();
    randomChump("Sombito");
    delete(zombie);
}
