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
int &fun() {
  static int a = 10;
  return a;
}
 
int main() {
  int &y = fun();
  y = y +30;
  cout<<fun();
  return 0;
}
