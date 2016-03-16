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
 
class Base1
{
public:
    char c;
};
 
class Base2
{
public:
    int c;
};
 
class Derived: public Base1, public Base2
{
public:
    void show()  { cout << c; }
};
 
int main(void)
{
    Derived d;
    d.show();
    return 0;
}
