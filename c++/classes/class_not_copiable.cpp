#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;

class NoCopyingClass
{
private:

    // Prevent copy constructor
    NoCopyingClass(const NoCopyingClass&);
    // Assingnment operator to prevent copying
    NoCopyingClass& operator=(const NoCopyingClass&);

public: 
    // Prevent direct instantiation 
    NoCopyingClass(){}

    void action(){ cout << "action" << endl;}

};


int main() 
{
    NoCopyingClass obj1;
    obj1.action();

    // Trying to create a copy will result in a compilation error
    // NoCopyingClass obj2 = obj1; // Error: call to private constructor of 'NoCopyingClass'

    // Trying to assign one object to another will also result in a compilation error
    // NoCopyingClass obj3;
    // obj3 = obj1; // Error: 'NoCopyingClass::NoCopyingClass(const NoCopyingClass&)' is private within this context


    return 0;
}
