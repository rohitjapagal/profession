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
public:
    virtual void show() { cout<<" In Base \n"; }
};
 
class Derived: public Base
{
public:
    void show() { cout<<"In Derived \n"; }
};
 
int main(void)
{
    Base *bp = new Derived;
    bp->show();
 
    Base &br = *bp;
    br.show();
 
    return 0;
}
