#include <iostream>

class Base
{
public:
    virtual void action(){std::cout << "Base action" << std::endl;}    
};

class Derived final : public Base
{
public:
    void action() override final
    {
        std::cout << "Derived action" << std::endl;
    }    
};

// Error: cannot derive from ‘final’ base ‘Derived’ in derived type ‘SecondDerived’
// Error: virtual function ‘virtual void SecondDerived::action()’ overriding final function
/* class SecondDerived : public Derived
{
public:
    void action() override
    { 
        std::cout << "Second Derived action" << std::endl; 
    }
}; */

int main()
{
    return 0;
}