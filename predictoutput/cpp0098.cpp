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
    int a;
public:
    Base() {a = 0;}
};
 
class Derived1:  public Base
{
public:
    int c;
};
 
 
class Derived2:  public Base
{
public:
    int c;
};
 
class DerivedDerived: public Derived1, public Derived2
{
public:
    void show()  {   cout << a;  }
};
 
int main(void)
{
    DerivedDerived d;
    d.show();
    return 0;
}
