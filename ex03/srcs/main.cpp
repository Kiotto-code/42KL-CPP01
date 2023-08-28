#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

//reference needs to initialized when the constructor is called; it not reasonable cauz human doesnt always armed.
// pointer can change the address while reference supposed to be const.

int test(void)
{
	//first codes // ref
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");//Weapon member
		club.setType("");
		bob.attack();
	}
	//second codes //ptr
	{
		Weapon club = Weapon("crude spiked club");
		Weapon un = Weapon("");

		HumanB jim("Jim");
		jim.setWeapon(club); //classB member->picking up the weapon slot
		jim.attack();
		club.setType("some other type of club");//Weapon member
		jim.attack();
		jim.setWeapon(un);
		
		jim.attack();
	}
	// system ("leaks -q run");
	return 0;
}

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cin.get();
	test();
	// system ("leaks -q run");
	return (0);
}