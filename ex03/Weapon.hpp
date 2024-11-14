#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		const std::string& get_Type(void);
};

#endif
