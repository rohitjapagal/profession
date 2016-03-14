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
    int i;
public:
    A(int ii = 0) : i(ii) {}
    void show() {  cout << i << endl;  }
};
 
class B
{
    int x;
public:
    B(int xx) : x(xx) {}
    operator A() const {  return A(x); }
};
 
void g(A a)
{
    a.show();
}
 
int main()
{
    B b(10);
    g(b);
    g(20);
    return 0;
}
