#include <iostream>


using namespace std;

class Base 
{
public:
    void baseAction() 
    {
        std::cout << "Base action" << std::endl;
    }
};

class Derivated : private Base
{
public:    
    void derivatedAction()
    {
        baseAction();
        std::cout << "Derivated action" << std::endl;
    }
};


int main() 
{
    Derivated d;
    d.derivatedAction();

    return 0;
}