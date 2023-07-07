/* C++ supports multiple inheritance. 
What is the “diamond problem” that can occur with multiple inheritance? 
Give an example. 
*/

#include <iostream>


using namespace std;

class Base 
{
public:
    void doSomething() 
    {
        std::cout << "Base::doSomething()" << std::endl;
    }
};

class DerivedA : public Base 
{
public:
    void doSomething() 
    {
        std::cout << "DerivedA::doSomething()" << std::endl;
    }
};

class DerivedB : public Base 
{
public:
    void doSomething() 
    {
        std::cout << "DerivedB::doSomething()" << std::endl;
    }
};

class DerivedAB : public DerivedA, public DerivedB {};

int main() 
{
    DerivedAB obj;
    obj.doSomething();  // Ambiguity/Error: Diamond Problem

    return 0;
}