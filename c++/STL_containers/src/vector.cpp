#include <iostream>
#include <string>
#include <vector>

using namespace std;


template <typename T>
void printv(vector<T>& v)
{
    if(v.empty())
        return;
        
    for(auto& i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> iv = {10, 5};

    printv(iv);

    return 0;
}