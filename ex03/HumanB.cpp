
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB()
{

}

void    HumanB::attack(void)
{
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->get_Type() << std::endl;
    else
        std::cout << _name << " torta in his face AUCH" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}
