#include "FunctorProvider.h"

FunctorProvider::FunctorProvider()
{
    //ctor
    std::cout << "Functor provider constructor" << std::endl;
}

FunctorProvider::~FunctorProvider()
{
    //dtor
    std::cout << "Functor provider destructor" << std::endl;
}

void FunctorProvider::operator()(std::string message)
{
    std::cout << "Functor Execution:" << message << std::endl;
}

