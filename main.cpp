/**
Eng. Edwin Agudelo
*/

// standar
#include <cstdlib>
#include <functional>
#include <iostream>
#include <string>
// custom
#include "FunctionProvider.h"
#include "FunctorProvider.h"
#include "TestFunctional.h"

void localPrintFunction(std::string message)
{
    std::cout << "Local Print Function said:" << message << std::endl;
}

int main()
{
    std::cout << "Starting Functional Test!" << std::endl;
    TestFunctional *tf = new TestFunctional();

    tf->set_Message_FunctionPointer(localPrintFunction);
    tf->execute_Message_FunctionPointer("Test With local Functions");

    // Functional
    FunctionProvider fp;
    std::function<void(std::string)> f = std::bind(FunctionProvider::printMessage, &fp, std::placeholders::_1);
    tf->set_Message_Functional(f);
    tf->execute_Message_Functional("Test with functional");

    getchar();
    return 0;
}
