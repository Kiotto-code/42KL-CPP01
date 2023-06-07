#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    Person;
    
    if (ac == 2)
        Person.complain(av[1]);

    return (0);
}