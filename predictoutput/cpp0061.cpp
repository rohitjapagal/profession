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
    static int x;
    int *ptr;
    int y;
};
 
int main()
{
    Test t;
    cout << sizeof(t) << " ";
    cout << sizeof(Test *);
}
