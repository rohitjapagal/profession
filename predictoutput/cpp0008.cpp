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
 
int x = 10;
void fun()
{
    int x = 2;
    {
        int x = 1;
        cout << ::x << endl; 
    }
}
 
int main()
{
    fun();
    return 0;
}

