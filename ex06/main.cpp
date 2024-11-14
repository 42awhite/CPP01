#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl Karen;

    if (argc != 2)
    {
        std::cout << "TA MAL" << std::endl;
        return 1;
    }
    Karen.complain(argv[1]);
}
