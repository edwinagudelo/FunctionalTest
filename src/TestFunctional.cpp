#include "TestFunctional.h"

TestFunctional::TestFunctional()
{
    //ctor
    std::cout << "TestFunctional Constructor" << std::endl;
}

TestFunctional::~TestFunctional()
{
    //dtor
    std::cout << "TestFunctional Destructor" << std::endl;
}


void TestFunctional::set_Message_Functional(std::function<void(std::string)>g)
{
    this->f = g;
}

void TestFunctional::execute_Message_Functional(std::string strMessage)
{
    this->f(strMessage);
}

void TestFunctional::set_Message_FunctionPointer(printFunctionType p)
{
    this->pf = p;
}

void TestFunctional::execute_Message_FunctionPointer(std::string strMessage)
{
    this->pf(strMessage);
}


void TestFunctional::set_Message_ObjectFunctionPointer(printFunctionType p)
{
    this->opf = p;
}

void TestFunctional::execute_Message_ObjectFunctionPointer(std::string strMessage)
{
    this->opf(strMessage);
}

