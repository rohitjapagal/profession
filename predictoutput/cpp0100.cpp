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
     A(){ cout <<"1";}
     A(const A &obj){ cout <<"2";}
};
 
class B: virtual A
{
public:
    B(){cout <<"3";}
    B(const B & obj){cout<<"4";}
};
 
class C: virtual A
{
public:
   C(){cout<<"5";}
   C(const C & obj){cout <<"6";}
};
 
class D:B,C
{
public:
    D(){cout<<"7";}
    D(const D & obj){cout <<"8";}
};
 
int main()
{
   D d1;
   D d(d1);
}
