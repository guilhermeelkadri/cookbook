/* You are given library class Something as follows:

class Something {
public:
    Something() {
        topSecretValue = 42;
    }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};

Implement a method to get topSecretValue for any given Something* object. 
The method should be cross-platform compatible and not depend on sizeof (int, bool, string).
 */


#include <iostream>


class Something {
public:
    Something() {
        topSecretValue = 42;
    }
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
    int getTopSecretValue() {return topSecretValue;}
private:
    int topSecretValue;
};


int main()
{
    Something a;
    Something *object = reinterpret_cast<Something*>(&a);

    std::cout << object->getTopSecretValue() << std::endl;

    return 0;
}