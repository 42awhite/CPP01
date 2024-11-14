#include "Zombie.hpp"

int main()
{
    Zombie *zombie = NULL;

    zombie = zombieHorde(10, "Lucas");
    delete[] zombie;
}
