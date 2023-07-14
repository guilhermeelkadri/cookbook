/* Implement a template function IsDerivedFrom() 
that takes class C and class P as template parameters. 
It should return true when class C is derived from class P and false otherwise. */

#include <iostream>

template<typename C, typename P>
constexpr bool IsDerivedFrom() {
    return std::is_base_of<P, C>::value;
}

class Base {};

class Derived : public Base {};

int main() 
{
    bool isDerivedFrom = IsDerivedFrom<Derived, Base>();
    std::cout << std::boolalpha << isDerivedFrom << std::endl;  

    bool isDerivedFrom2 = IsDerivedFrom<Base, Derived>();
    std::cout << std::boolalpha << isDerivedFrom2 << std::endl;  

    return 0;
}