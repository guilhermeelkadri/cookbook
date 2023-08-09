#include <iostream>

class AbstractBase
{
public:
    virtual void action() = 0; // pure virtual function    
};

class Derived : public AbstractBase
{
public:
    void action() override
    {
        std::cout << "Derived action" << std::endl;
    }    
};

void printAction(AbstractBase &inputClass)
{
    inputClass.action();
}

int main()
{
    Derived d;

    printAction(d);

    // Error: cannot declare variable ‘a’ to be of abstract type ‘AbstractBase’
    // AbstractBase a;
    // printAction(a);

    return 0;
}