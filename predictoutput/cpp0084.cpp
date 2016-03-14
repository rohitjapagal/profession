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
class Test
{
public:
    void fun();
};
static void Test::fun()   
{
    std::cout<<"fun() is static\n";
}
int main()
{
    Test::fun();   
    return 0;
}
