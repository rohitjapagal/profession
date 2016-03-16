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
 
/* local variable is same as a member's name */
class Test
{
private:
    int x;
public:
    void setX (int x) { Test::x = x; }
    void print() { cout << "x = " << x << endl; }
};
 
int main()
{
    Test obj;
    int x = 40;
    obj.setX(x);
    obj.print();
    return 0;
}
