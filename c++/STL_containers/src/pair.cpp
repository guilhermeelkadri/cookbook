#include <iostream>
#include <string>
#include <vector>

using namespace std;


template <typename T, typename U>
void printPair(pair<T, U>& p)
{
    cout << "First: " << p.first << " - Second: " << p.second << endl;
}

void message()

int main()
{
    pair<int, string> pair1 = {10, "sp1"};

    printPair(pair1);

    return 0;
}