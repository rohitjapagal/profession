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
class Base 
{
   protected:
      int x;
   public:
      Base (int i){ x = i;}
};
 
class Derived : public Base 
{
   public:
      Derived (int i):x(i) { }
      void print() { cout << x ; }
};
 
int main()
{
    Derived d(10);
    d.print();
}
