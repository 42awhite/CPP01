#include "Harl.hpp"

int main(void)
{
    Harl Karen;

    std::cout << "DEBUG\n";
    Karen.complain("debug");

    std::cout << "INFO\n";
    Karen.complain("info");

    std::cout << "WARNING\n";
    Karen.complain("warning");

    std::cout << "ERROR\n";
    Karen.complain("error");
}
