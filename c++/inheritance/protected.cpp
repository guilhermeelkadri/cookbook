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

class Derivated : protected Base
{
public:    
    void derivatedAction()
    {
        baseAction();
        std::cout << "Derivated action" << std::endl;
    }
};

class Derivated2 : private Derivated
{
public:
    void derivated2Action()
    {
        baseAction();
    }     
};

int main() 
{
    Derivated d;
    d.derivatedAction();

    Derivated2 d2;
    d2.derivated2Action();

    return 0;
}