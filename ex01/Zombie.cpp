#include "Zombie.hpp"


Zombie::Zombie()
{

}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie* zombieHorde(int n, std::string name)
{
    Zombie* horda = new Zombie[n];

    for (size_t i = 0; i < n; i++)
    {
        horda[n].set_name(name);
        horda[n].announce();
    }
    return(horda);
}

void Zombie::announce()
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " has been destroyed" << std::endl;
}
