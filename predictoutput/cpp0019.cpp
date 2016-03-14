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
class P
{
public:
    virtual void show() = 0;
};
 
class Q : public P { 
   int x;
};
 
int main(void)
{
    Q q;
    return 0;
}
