#ifndef FUNCTIONPROVIDER_H
#define FUNCTIONPROVIDER_H

#include <iostream>
#include <string>


class FunctionProvider
{
    public:
        FunctionProvider();
        virtual ~FunctionProvider();

        void printMessage(const std::string message);

    protected:

    private:
};

#endif // FUNCTIONPROVIDER_H
