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
#include<stdio.h>
 
using namespace std;
 
class Base
{
public:
  Base()
  {
    fun(); //note: fun() is virtual
  }
  virtual void fun()
  {
    cout<<"\nBase Function";
  }
};
 
class Derived: public Base
{
public:
  Derived(){}
  virtual void fun()
  {
    cout<<"\nDerived Function";
  }
};
 
int main()
{
  Base* pBase = new Derived();
  delete pBase;
  return 0;
}
