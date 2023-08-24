#include "FunctionProvider.h"

FunctionProvider::FunctionProvider()
{
    //ctor
    std::cout << "Function Provider Constructor" << std::endl;
}

FunctionProvider::~FunctionProvider()
{
    //dtor
    std::cout << "Function Provider Destructor" << std::endl;
}

/** @brief Just a method that prints a message
  *
  * @param std::string message: message to print
  */
void FunctionProvider::printMessage(const std::string message)
{
    std::cout<< "Message from the inner method in an object:"  << message << std::endl;
}
