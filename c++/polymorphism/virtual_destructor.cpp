#include <iostream>

class Base
{
public:    
    Base(){std::cout<<"Constructed Base"<<std::endl;}
    virtual ~Base(){std::cout<<"Destroyed Base"<<std::endl;}
};

class Derived : public Base
{
public:    
    Derived(){std::cout<<"Constructed Derived"<<std::endl;}
    ~Derived(){std::cout<<"Destroyed Derived"<<std::endl;}    
};

void deleteClass(Base *base)
{
    delete base;
}

int main()
{
    std::cout << "1. Allocating Derived obj on heap" << std::endl;
    Derived *d = new Derived; 

    std::cout << "2. Trying to delete Derived obj on heap" << std::endl;
    deleteClass(d);


    std::cout << "3. Allocating Derived obj on stack" << std::endl;
    Derived d_stack;
    std::cout << "4. Automatic destruction when it goes out of scope" << std::endl;

    return 0;
}