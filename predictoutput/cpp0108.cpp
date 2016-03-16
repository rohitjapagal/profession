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
    virtual void show() = 0;
};
 
class Derived : public Base { };
 
int main(void)
{
    Derived q;
    return 0;
}
