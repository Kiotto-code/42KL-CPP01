#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    Person;
    
    if (ac == 2)
        Person.complain(av[1]);
    else
    {
        Person.complain("DEBUG");
        Person.complain("INFO");
        Person.complain("WARNING");
        Person.complain("ERROR");
    }
}
