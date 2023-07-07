/* Implement a void function F that takes pointers to two arrays of integers (A and B) and a size N as parameters. 
It then populates B where B[i] is the product of all A[j] where j != i.

For example: If A = {2, 1, 5, 9}, then B would be {45, 90, 18, 10}. */


#include <iostream>
#include <array>

using namespace std;

template<typename T, size_t M>
void F(array<T, M> &A, array<T, M> &B, const int N)
{
    for(int i = 0; i < N; i++)
    {
        int sum = 1;
        for(int j = 0; j < N; j++)
        {
            if(i != j)
            {
                sum *= A[j];
            }
        }

        B[i] = sum;
    }
    
}

template<typename T, size_t N>
void printArray(array<T, N> &a)
{
    for (const auto i : a)
    {
        cout << i << " ";
    }

    cout << endl;
}

int main(int argc, const char * argv[]) 
{
    array<int, 4>A = {2, 1, 5, 9};
    array<int, A.size()>B = {0};

    F(A, B, A.size());

    printArray(A);
    printArray(B);


    return 0;
}