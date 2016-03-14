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
    cout<<"Constructor Called \n";
}
 
int main()
{
    cout<<"Start \n";
    Test t1();
    cout<<"End \n";
    return 0;
}
