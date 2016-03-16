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
#include<stdlib.h>
using namespace std;
 
class Test
{
public:
   Test()
   { cout << "Constructor called"; }
};
 
int main()
{
    Test *t = (Test *) malloc(sizeof(Test));
    return 0;
}
