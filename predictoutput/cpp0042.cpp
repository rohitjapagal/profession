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
 
template <int N>
class A {
   int arr[N];
public:
   virtual void fun() { cout << "A::fun()"; }
};
 
class B : public A<2> {
public:
   void fun() { cout << "B::fun()"; }
};
 
class C : public B { };
 
int main() {
   A<2> *a = new C;
   a->fun();
   return 0;
}
