/**
 * \file   file.cpp
 * \author Rangarajan R 
 * \date   March, 2016
 * \brief  
 *   Predict the output.
 *
 * \details 
 *   Detailed description of file.
 *
 * \note
 *   The notes for this file.
 *
 * \copyright
 *   
 */
#include<iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    Point(int i, int j);  // Constructor
};
 
Point::Point(int i = 0, int j = 0)  {
    x = i;
    y = j;
    cout << "Constructor called";
}
 
int main()
{
   Point t1, *t2;
   return 0;
}
