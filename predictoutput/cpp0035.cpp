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
 
class base
{
public:
    virtual void show()  { cout<<" In Base \n"; }
};
 
class derived: public base
{
    int x;
public:
    void show() { cout<<"In derived \n"; }
    derived()   { x = 10; }
    int getX() const { return x;}
};
 
int main()
{
    derived d;
    base *bp = &d;
    bp->show();
    cout << bp->getX();
    return 0;
}
