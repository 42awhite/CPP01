#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
    _name = name;
}

HumanA::~HumanA()
{

}

void    HumanA::attack(void)
{
    std::cout << _name << " attacks with their " << _weapon.get_Type() << std::endl; 
}
