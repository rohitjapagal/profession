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
   int aid;
public:
   A(int x)
   { aid = x; }
   void print()
   { cout << "A::aid = " <<aid; }
};
 
class B
{
    int bid;
public:
    static A a;
    B (int i) { bid = i; }
};
 
int main()
{
  B b(10);
  b.a.print();
  return 0;
}
