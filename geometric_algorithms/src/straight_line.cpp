/* Check whether a straight line can be formed using N co-ordinate points

Given an array arr[] of N co-ordinate points, the task is to check whether 
a straight line can be formed using these co-ordinate points.

    Input: arr[] = {{0, 0}, {1, 1}, {2, 2}} 
    Output: Yes 
    Explanation: 
    Slope of every two points is same. That is 1. 
    Therefore, a straight line can be formed using these points.

    Input: arr[] = {{0, 1}, {2, 0}} 
    Output: Yes 
    Explanation: 
    Two points in co-ordinate system always forms a straight line. 
 */

#include <iostream>
#include <vector>

using namespace std;

bool isStraightLine(const vector<pair<int,int>> &arr)
{
    // First point
    pair<int, int> p0;
    p0.first = arr[0].first;
    p0.second = arr.at(0).second;
    
    // Second point
    pair<int, int> p1;
    p1.first = arr[1].first;
    p1.second = arr.at(1).second;

    float dx = p1.first - p0.first;
    float dy = p1.second - p0.second;
    float m = dy / dx;
    float b = p0.second - (m * p0.first); 


    for (size_t i = 0; i < arr.size(); i++)
    {
        int x = arr[i].first;
        int y = arr[i].second;

        if(y != ((m * x) + b))
        {
            cout << "NO - x[" << i << "] = " << x << " y[" << i << "] = " << y << endl;
            
            return false;
        }
        else
        {
            cout << "YES - x[" << i << "] = " << x << " y[" << i << "] = " << y << endl;
        }
    }
    
    return true;
}

int main() 
{
    vector<pair<int, int>> arr = {{0, 0}, {1, 1}, {2, 2}};

    if(isStraightLine(arr))
    {
        cout << "is a straing line" << endl;
    }
    else
    {
        cout << "is not a straing line" << endl;
    }

    return 0;
}