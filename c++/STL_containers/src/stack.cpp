#include <iostream>
#include <stack>
#include <deque>
#include <list>

using namespace std;

template<typename T, typename U>
void infoStack(stack<T, U> s)
{
    if(s.empty())
    {
        return;
    }

    cout << "Stack size: " << s.size();
    cout << " - top: " << s.top();
    cout << endl;
}

template <typename T, typename U>
void popAll(stack<T, U> s)
{   
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
}

void message(const char * s)
{
    cout << s << endl;
} 

int main()
{
    // stack from deque
    message("stack from deque");
    deque<int> d1 = {1, 2, 3};
    stack<int, deque<int>> q1(d1);

    infoStack(q1);
    popAll(q1);

    // defautl stack (deque)
    message("defautl stack (deque)");
    deque<int> d2 = {1, 2, 3, 4};
    stack<int> q2(d2);

    infoStack(q2);
    popAll(q2);

    // stack from list
    message("stack from list");
    list<int> l1{1, 2, 3, 4, 5};
    stack<int, list<int>> q3(l1);

    infoStack(q3); 

    message("pop last element");
    cout << q3.top() << endl;
    q3.pop();

    message("push a new element: 6");
    q3.push(6);

    message("Pop all from the stack");
    popAll(q3); 

    return 0;
}