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
   Test(Test &t) { }
   Test()        { }
};
 
Test fun()
{
    cout << "fun() Called\n";
    Test t;
    return t;
}
 
int main()
{
    Test t1;
    Test t2 = fun();
    return 0;
}
