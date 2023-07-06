#include <iostream>
#include <list>

using namespace std;

// print all elements in list
template<typename T>
void printl(list<T> & l)
{
    if(l.empty())
    {
        return;
    }

    for(T &i : l)
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
    list<int> l1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    message("size", l1.size());
    message("front", l1.front());
    message("back", l1.back());


    message("push back 22");
    l1.push_back(22);
    printl(l1);

    // using iterator to insert or erase
    message("insert:");
    list<int>::iterator it1 = l1.begin();

    while((*++it1 != 5) && it1 != l1.end());
    if (it1 != l1.end())
    {
        message("Insert 33 before element 5");
        l1.insert(it1, 33);
    }
    printl(l1);
    
    it1 = l1.begin();
    while((*it1++ != 5) && it1 != l1.end());
    if (it1 != l1.end())
    {
        message("Insert 44 after element 5");
        l1.insert(it1, 44);
    }
    printl(l1);

    // find element 7
    while((*++it1 != 7) && (it1 != l1.end()));
    // erase element
    if(it1 != l1.end())
    {
        message("Erase element 7");
        l1.erase(it1);
    } 
    printl(l1);

    // using remove
    message("Remove element 8");
    l1.remove(8);
    printl(l1);

    // erase a value to another element value
    auto it2 = it1 = l1.begin();

    while((*++it1 != 44) && (it1 != l1.end()));
    while((*++it2 != 10) && (it2 != l1.end()));

    if(it1 != l1.end() && it2 != l1.end())
    {
        l1.erase(it1, it2);
        printl(l1);
    }

    return 0;
}