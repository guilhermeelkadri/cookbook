#include <iostream>
#include <tuple>


using namespace std;

template<typename T>
void printTuple(T t)
{
    auto tsz = tuple_size<decltype(t)>::value;
    if(tsz != 3)
    {
        return;
    }

    cout << "First:" << get<0>(t) << " Second:" 
    << get<1>(t) << " Third:" << get<2>(t) << endl;
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
    tuple<int, string, float> t1 = {10, "ten", 100.1};
    message("initializer list ");
    printTuple(t1);
    
    // default constructor
    tuple<int, string, float> t2(20, "twenty", 20.2);
    message("default constructor");
    printTuple(t2);
    
    // using make tuple
    tuple<int, string, float> t3 = make_tuple(30, "thirdy", 30.3);
    message("default constructor");
    printTuple(t3);

    // comparison operators
    message("p1 == p2", (t1 == t2));
    message("p1 < p2", (t1 < t2));
    message("p1 < p3", (t1 < t3));
    message("p1 > p2", (t1 > t2));
    message("p1 > p3", (t1 > t3));

    return 0;
}