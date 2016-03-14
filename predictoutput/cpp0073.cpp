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
  
class Test
{
public:
  Test();
};
  
Test::Test()  {
    cout << " Constructor Called. ";
}
  
void fun() {
  static Test t1;
}
  
int main() {
    cout << " Before fun() called. ";
    fun();
    fun();
    cout << " After fun() called. ";  
    return 0;
}
