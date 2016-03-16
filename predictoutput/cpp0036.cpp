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
public:
    void print() { cout << "A::print()"; }
};
 
class B : private A
{
public:
    void print() { cout << "B::print()"; }
};
 
class C : public B
{
public:
    void print() { A::print(); }
};
 
int main()
{
    C b;
    b.print();
}
