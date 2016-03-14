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
 
class base {
    int arr[10];
};
 
class b1: public base { };
 
class b2: public base { };
 
class derived: public b1, public b2 {};
 
int main(void)
{
  cout << sizeof(derived);
  return 0;
}
