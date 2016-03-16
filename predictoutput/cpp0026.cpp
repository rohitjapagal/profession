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
 
int fun(int a, int b  = 1, int c =2)
{
    return (a + b + c);
}
 
int main()
{
    cout << fun(12, ,2);
    return 0;
}

