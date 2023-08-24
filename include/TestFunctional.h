#ifndef TESTFUNCTIONAL_H
#define TESTFUNCTIONAL_H

#include <algorithm>
#include <functional>
#include <iostream>
#include <string>

using printFunctionType = void(*)(std::string);

class TestFunctional
{
    public:
        TestFunctional();
        virtual ~TestFunctional();

        void set_Message_Functional(std::function<void(std::string)> g);
        void execute_Message_Functional(std::string strMessage);

        void set_Message_FunctionPointer(printFunctionType p);
        void execute_Message_FunctionPointer(std::string strMessage);

        void set_Message_ObjectFunctionPointer(printFunctionType p);
        void execute_Message_ObjectFunctionPointer(std::string strMessage);

    protected:

    private:
        std::function<void(std::string)> f;
        printFunctionType pf;
        printFunctionType opf;
};

#endif // TESTFUNCTIONAL_H
