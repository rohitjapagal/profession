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
 
int main()
{
    try
    {
       throw 'a';
    }
    catch (int param)
    {
        cout << "int exception\n";
    }
    catch (...)
    {
        cout << "default exception\n";
    }
    cout << "After Exception";
    return 0;
}
