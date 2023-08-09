#include <iostream>


using namespace std;

class Base1 
{
public:
    Base1()
    {
        std::cout << "Base 1" << std::endl;
    }
};

class Base2 
{
public:
    Base2()
    {
        std::cout << "Base 2" << std::endl;
    }
};

class Derivated : public Base1, public Base2
{
public:    
    Derivated()
    {
        std::cout << "Derivated" << std::endl;
    }

    void derivatedAction()
    {
        std::cout << "Derivated action" << std::endl;
    }
};


int main() 
{
    Derivated d;
    d.derivatedAction();

    return 0;
}