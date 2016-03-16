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
 
class X 
{
public:
    int x;
};
 
int main()
{
    X a = {10};
    X b = a;
    cout << a.x << " " << b.x;
    return 0;
}
