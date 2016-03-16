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
  
int i;
  
class A
{
public:
    ~A()
    {
        i=10;
    }
};
  
int foo()
{
    i=3;
    A ob;
    return i;
}
  
int main()
{
    cout << foo() << endl;
    return 0;
}
