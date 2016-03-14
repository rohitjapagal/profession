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
#include <iostream>
using namespace std;
class A
{
protected:
    int x;
public:
    A() {x = 0;}
    friend void show();
};
 
class B: public A
{
public:
    B() : y (0) {}
private:
    int y;
};
 
void show()
{
    A a;
    B b;
    cout << "The default value of A::x = " << a.x << " ";
    cout << "The default value of B::y = " << b.y;
}
