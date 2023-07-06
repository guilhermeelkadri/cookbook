#include <iostream>
#include <string>
#include <vector>

using namespace std;


template <typename T, typename U>
void printPair(pair<T, U>& p)
{
    cout << "First: " << p.first << " - Second: " << p.second << endl;
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
    pair<int, string> p1 = {10, "ten + big string ................................."};
    message("initializer list ");
    printPair(p1);

    // default constructor
    pair<int, string> p2(20, "twenty"); 
    message("default constructor");
    printPair(p2);

    // using make pair
    message("make pair");
    pair<int, string> p3 = make_pair(30, "thirdy");
    printPair(p3);

    // comparison operators
    message("p1 == p2", (p1 == p2));
    message("p1 < p2", (p1 < p2));
    message("p1 < p3", (p1 < p3));
    message("p1 > p2", (p1 > p2));
    message("p1 > p3", (p1 > p3));


    return 0;
}