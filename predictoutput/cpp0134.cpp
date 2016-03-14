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
 
// Ideally it should have been "int fun() (int)"
int fun()
{
    throw 10;
}
 
int main()
{
    try
    {
        fun();
    }
    catch (int )
    {
        cout << "Caught";
    }
    return 0;
}
