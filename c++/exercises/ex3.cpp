/* Implement a template boolean IsSameClass() that takes 
class A and B as template parameters. 
It should compare class A and B and return false when they 
are different classes and true if they are the same class. */

#include <iostream>

template<typename T, typename U>
constexpr bool IsSameClass() {
    return std::is_same<T, U>::value;
}

class MyClass {};

int main() 
{
    bool isSame = IsSameClass<MyClass, MyClass>();
    std::cout << std::boolalpha << isSame << std::endl;  

    bool isSame2 = IsSameClass<MyClass, int>();
    std::cout << std::boolalpha << isSame2 << std::endl;  

    return 0;
}