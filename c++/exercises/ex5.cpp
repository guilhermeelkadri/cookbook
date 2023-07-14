/* How can you make sure a C++ function can be called as e.g.
void foo(int, int) but not as any other type like void foo(long, long)? */

#include <iostream>

using namespace std; 

void foo(int a, int b)
{
    std::cout << a << " " << b << std::endl;
}

template<typename T, typename U> void foo(T, U) = delete;

int main(void)
{
    foo(10, 20);

    // foo(1.2, 2.3) // Compilation error: Call to deleted function

}