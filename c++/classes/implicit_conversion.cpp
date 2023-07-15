#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;

class ImplicitConversion
{
public:
    unsigned int foo;
public: 
    ImplicitConversion(int newFoo): foo(newFoo){}
    ~ImplicitConversion(){}

    void printClassMember(ImplicitConversion bar){ cout << "Do anything" << endl;}

};


int main() 
{
    // Create a instance on heap 
    ImplicitConversion i1(10);

    i1.printClassMember(20);

    return 0;
}
