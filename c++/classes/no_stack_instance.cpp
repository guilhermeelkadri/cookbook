#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;

class NoStack
{
private:
    // Private constructor to prevent instantiation on the stack
    ~NoStack() ;

public: 
    NoStack(){}

    void action(){ cout << "action" << endl;}

};


int main() 
{
    // Create a instance on heap 
    NoStack *obj = new NoStack;

    // Trying to create an instance on the stack will result in a compilation error
    // NoStack obj; // Error: calling a private constructor of class 'NoStackInstantiation'

    return 0;
}
