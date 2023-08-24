#ifndef FUNCTORPROVIDER_H
#define FUNCTORPROVIDER_H

#include <iostream>
#include <string>

class FunctorProvider
{
    public:
        FunctorProvider();
        virtual ~FunctorProvider();

        void operator()(std::string message);

    protected:

    private:
};

#endif // FUNCTORPROVIDER_H
