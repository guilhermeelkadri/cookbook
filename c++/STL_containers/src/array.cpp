#include <iostream>
#include <array>

using namespace std;

template<typename T, size_t N>
void printArray(array<T, N> &a)
{
    for(const auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}

// print simple message
void message(const char * s)
{
    cout << s << endl;
} 

void message(const char * s, const int n)
{
    cout << s << ": " << n << endl;
}

int main()
{
    // initializer list
    array<int, 3> a1 = {1, 2, 3};
    message("initializer list");
    printArray(a1);

    // default constructor
    array<string, 3> a2;
    a2 = {"one", "two", "three"};
    message("default constructor");
    printArray(a2);

    // check size
    message("size of a1", a1.size());
    message("size of a2", a2.size());

    


    return 0;
}
