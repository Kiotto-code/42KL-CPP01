#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    Person;
    
    if (ac == 1)
        Person.complain("stuutter");
    else
        Person.complain(av[1]);
    

    return (0);
}
