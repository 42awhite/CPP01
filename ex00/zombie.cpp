#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}
void Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " has been destroyed" << std::endl;
}
