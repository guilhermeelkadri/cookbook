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

template<typename T>
void message(const char * s, const T t)
{
    cout << s << ": " << t << endl;
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

    // access elements
    message("a1 index 3 is", a1[2]);
    message("a2 index 1 is", a2[1]);
    message("a1 index 3 is", a1.at(2));
    message("a2 index 1 is", a2.at(1));

    // direct access pointer 
    int *p1 = a1.data();
    for(size_t i=0; i < a1.size(); i++)
    {   
        cout << i << ": " << *p1++ << endl;
    }
    
    auto *p2 = a2.data();
    for(size_t i=0; i < a1.size(); i++)
    {   
        cout << i << ": " << *p2++ << endl;
    }


    return 0;
}
