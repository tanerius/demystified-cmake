#include <iostream>
#include <dynadder.h>
#include <printer.h>
#include "config.h"
#include <headeronly.h>

int main()
{
    std::cout << "This is the Main Project Application" << std::endl;
    std::cout << "************************************" << std::endl;
    std::cout << std::endl;
    std::cout << "Your platform is: " << MP_PLATFORM << std::endl;
    std::cout << std::endl;
    std::cout << "This is output from STATICPRINTER: ";
    printStaticMessage((char*)"STATIC HI");
    std::cout << std::endl;
    std::cout << "This is output from DYNADDER::adder(5,4): " <<  adder(5,4) <<  std::endl;
    std::cout << std::endl;
    Headeronly h;
    std::cout << "This is output from Headeronly::returnTen() " <<  h.returnTen() <<  std::endl;

    return 0;
}