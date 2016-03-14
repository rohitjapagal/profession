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
 
class A
{
    public:
    A& operator=(const A&a)
    {
        cout << "A's assignment operator called" << endl;
        return *this;
    }
};
 
class B
{
    A a[2];
};
 
int main()
{
    B b1, b2;
    b1 = b2;
    return 0;
}
