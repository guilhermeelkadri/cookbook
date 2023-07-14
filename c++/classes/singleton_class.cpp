#include <cmath>
#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;

class SingletonClass
{
private:

    // Prevent direct instantiation 
    SingletonClass(){}

    // Private copy constructor
    SingletonClass(const SingletonClass&);
    // Assingnment operator to prevent copying
    SingletonClass& operator=(const SingletonClass&);

public: 
    static SingletonClass& getInstance()
    {
        // static objects are constructed only once
        static SingletonClass single;
        return single;
    }

    void action(){ cout << "action" << endl;}

};


int main() 
{
    SingletonClass &sc = SingletonClass::getInstance();
    sc.action();

    // Trying to create another instance will return the existing instance
    SingletonClass& anotherSingleton = SingletonClass::getInstance();
    anotherSingleton.action();

    return 0;
}
