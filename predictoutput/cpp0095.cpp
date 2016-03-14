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
 
class Base {
public:
    int fun()          {    cout << "Base::fun() called";     }
    int fun(int i)     {   cout << "Base::fun(int i) called";  }
};
 
class Derived: public Base  {
public:
    int fun()   {     cout << "Derived::fun() called";   }
};
 
int main()  {
    Derived d;
    d.Base::fun(5);
    return 0;
}
