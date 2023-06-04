#include <iostream>

int main(void)
{
	std::string		original = "HI THIS IS BRAIN";
	std::string		*stringPTR;
	std::string		&stringREF = original;

	stringPTR = &original;

	std::cout << "[print address]" << std::endl;
	std::cout << "&original\t: " << &original << std::endl;
	std::cout << "stringPTR\t: " << stringPTR << std::endl;
	std::cout << "stringPTR\t: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "[print value]" << std::endl;
	std::cout << "original\t: " << original << std::endl;
	std::cout << "*stringPTR\t: " << *stringPTR << std::endl;
	std::cout << "stringREF\t: " << stringREF << std::endl;
}
