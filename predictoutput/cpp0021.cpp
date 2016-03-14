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
private:
    static int count;
public:
    static Test& fun();
};
 
int Test::count = 0;
 
Test& Test::fun() 
{
    Test::count++;
    cout<<Test::count<<" ";
    return *this;
}
 
int main()  
{
    Test t;
    t.fun().fun().fun().fun();
    return 0;
}
