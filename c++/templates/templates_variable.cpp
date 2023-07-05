#include <iostream>
#include <string>

using namespace std;


template <typename T>
T pi = T(3.14159265358979323846L);

int main()
{
    cout.precision(20);

    cout << "pi: " << pi<long double> << endl; 

    return 0;
}