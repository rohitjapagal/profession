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
    virtual void fun() { cout << "A::fun() "; }
};
  
class B: public A
{
public:
   void fun() { cout << "B::fun() "; }
};
  
class C: public B
{
public:
   void fun() { cout << "C::fun() "; }
};
  
int main()
{
    B *bp = new C;
    bp->fun();
    return 0;
}
