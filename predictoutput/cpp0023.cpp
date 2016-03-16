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
 
class A
{
    public:
    virtual void fun() {cout << "A" << endl ;}
};
class B: public A
{
    public:
    virtual void fun() {cout << "B" << endl;}
};
class C: public B
{
    public:
    virtual void fun() {cout << "C" << endl;}
};
 
int main()
{
    A *a = new C;
    A *b = new B;
    a->fun();
    b->fun();
    return 0;
}
