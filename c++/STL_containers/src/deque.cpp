#include <iostream>
#include <deque>

using namespace std;

template<typename T>
void infoDeq(const deque<T> &d)
{
    cout << "size: " << d.size() << " - front: " 
        << d.front() << " - back: " << d.back() << endl;
}

template<typename T>
void printDeq(const deque<T> &d)
{
    for( auto i : d)
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

int main()
{
    // create deque
    deque<string> d1 = {"one", "two", "three"};

    infoDeq(d1);
    printDeq(d1);

    message("push back values");
    d1.push_back("four");
    d1.push_back("five");
    infoDeq(d1);
    printDeq(d1);

    message("pop from front");
    d1.pop_front();
    printDeq(d1);

    message("pop from back");
    d1.pop_back();
    printDeq(d1);

    message("push front");
    d1.push_front("newfront");
    printDeq(d1);

    message("push back");
    d1.push_back("newback");
    printDeq(d1);

    return 0;
}