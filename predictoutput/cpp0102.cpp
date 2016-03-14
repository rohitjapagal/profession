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
#include <iostream>
using namespace std;
class Point
{
    int x, y;
public:
 Point(int i = 0, int j =0)
   { x = i; y = j;  }
   int getX() const { return x; }
   int getY() {return y;}
};
 
int main()
{
    const Point t;
    cout << t.getX() << " ";
    cout << t.gety();
    return 0;
}
