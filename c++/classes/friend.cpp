#include <iostream>
#include <algorithm>
#include <stdexcept>

using namespace std;

class FriendOfFriend
{
private:
    friend class Friend;
    int foo;   

public:
    FriendOfFriend(int newFoo) 
    {
        this->foo = newFoo;
    }

};

class Friend
{

public:
    void bar(const FriendOfFriend &f)
    {
        cout << f.foo << endl;
    }
};


int main() 
{
    FriendOfFriend obj(10);

    cout << "Accessing private member age via friend class: ";
    Friend bff;
    bff.bar(obj);  

    return 0;
}
