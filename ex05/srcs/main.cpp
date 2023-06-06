#include <iostream>

int main()
{
    // std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
    //     "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    // for (int i = 1; i < 10; i++)
    //     ;


    std::string  array[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    std::string level = "ERROR";
    int i;
    for (i = 0; array[i] != level && i < 4; i++)
        // std::cout << i << std::endl;
        ;
    switch (i)
    {
        case    0:
            std::cout << i << std::endl;
        case    1:
            std::cout << i << std::endl;
        case    2:
            std::cout << i << std::endl;
        case    3:
            std::cout << i << "YES \n" << std::endl;
        default:
            std::cout << "[WRONG MESSAGE]: " << std::endl;
            std::cout << "#@%*@!$%!..I dunno what is that" << std::endl;
    }
}