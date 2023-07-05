#include <iostream>
#include <string>

using namespace std;


template <typename T>
T maxOf(const T& a, const T& b)
{
    return ( a > b ? a : b);
}

int main()
{
    int a  = 10;
    int b = 5;

    cout << maxOf(a, b) << endl;

    return 0;
}