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
 
int fun(int x = 0, int y = 0, int z)
{  return (x + y + z); }
 
int main()
{
   cout << fun(10);
   return 0;
}
