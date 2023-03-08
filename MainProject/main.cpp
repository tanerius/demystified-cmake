#include <iostream>
#include <dynadder.h>
#include <printer.h>

int main()
{
    std::cout << "This is the Main Project Application" << std::endl;
    std::cout << "This is output from STATICPRINTER: ";
    printStaticMessage((char*)"STATIC HI");
    std::cout << std::endl;
    std::cout << "This is output from DYNADDER::adder(5,3): " <<  adder(5,3) <<  std::endl;
    return 0;
}