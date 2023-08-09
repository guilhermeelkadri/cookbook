#include <iostream>

class Base
{
public:
    // enable override by derivated classes
    virtual void action()
    {
        std::cout << "Base action" << std::endl;
    }
};

class DerivatedA : public Base
{
    // override base action
    void action() override
    {
        std::cout << "DerivatedA action" << std::endl;
    }
};

class DerivatedB : public Base
{
    // override base action
    void action() override
    {
        std::cout << "DerivatedB action" << std::endl;
    }
};

void printAction(Base &inputClass)
{
    inputClass.action(); 
}

int main()
{
    DerivatedA a;
    DerivatedB b;

/*  This is polymorphism: treating different classes as a common type Base but ensuring that the
    right implementation of action() supplied by the derived types is executed. */
    printAction(a);

    printAction(b);
}