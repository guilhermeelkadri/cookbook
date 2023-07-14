#include <iostream>
#include <queue>
#include <deque>
#include <list>

using namespace std;

template <typename T, typename U>
void infoQueue(const queue<T, U> &q)
{
    if(q.empty())
    {
        return;
    }

    cout << "Queue size: " << q.size();
    cout << " - front: " << q.front();
    cout << " - back: " << q.back();
    cout << endl;
}

template <typename T, typename U>
void popAll(queue<T, U> q)
{   
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
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
    // queue from deque
    message("queue from deque");
    deque<int> d1 = {1, 2, 3};
    queue<int, deque<int>> q1(d1);

    infoQueue(q1);
    popAll(q1);

    // defautl queue (deque)
    message("defautl queue (deque)");
    deque<int> d2 = {1, 2, 3, 4};
    queue<int> q2(d2);

    infoQueue(q2);
    popAll(q2);

    // queue from list
    message("queue from list");
    list<int> l1{1, 2, 3, 4, 5};
    queue<int, list<int>> q3(l1);

    infoQueue(q3); 
    message("Pop all from the queue");
    popAll(q3); 

    return 0;
}